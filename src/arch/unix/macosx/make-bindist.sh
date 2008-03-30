#!/bin/sh
# make-bindist.sh for Mac OSX
# written by Christian Vogelgsang <chris@vogelgsang.org>
#
# make-bindist.sh <top_srcdir> <strip> <vice-version> <zip|nozip>

RUN_PATH=`dirname $0`

echo "Generating Mac OSX binary distribution."

TOP_DIR=$1
STRIP=$2
VICE_VERSION=$3
ZIP=$4
UI_TYPE=$5

# ui type
if [ "x$UI_TYPE" = "x" ]; then
  UI_TYPE="x11"
fi
echo "  ui type: $UI_TYPE"

# check binary type
TEST_BIN=src/x64
if [ ! -x $TEST_BIN ]; then
  echo "error missing binary $TEST_BIN"
  exit 1
fi
BIN_TYPE=`file $TEST_BIN | grep "$TEST_BIN:" | cut -f3,4 -d" "`
if [ x"$BIN_TYPE" = "xuniversal binary" ]; then
  BIN_FORMAT=ub
elif [ x"$BIN_TYPE" = "xfat file" ]; then
  BIN_FORMAT=ub
elif [ x"$BIN_TYPE" = "xexecutable i386" ]; then
  BIN_FORMAT=i386
elif [ x"$BIN_TYPE" = "xexecutable ppc" ]; then
  BIN_FORMAT=ppc
else
  echo "fatal: unknown bin type '$BIN_TYPE'"
  exit 1
fi
echo "  binary format: $BIN_FORMAT"

# setup BUILD dir
BUILD_DIR=vice-macosx-$UI_TYPE-$BIN_FORMAT-$VICE_VERSION
if [ -d $BUILD_DIR ]; then
  rm -rf $BUILD_DIR
fi
mkdir $BUILD_DIR
if [ ! -d $BUILD_DIR ]; then
  echo "error creating directory $BUILD_DIR"
  exit 1
fi

# make tools dir
TOOL_DIR=$BUILD_DIR/tools
if [ ! -d $TOOL_DIR ]; then
  mkdir $TOOL_DIR
fi

# define emulators and command line tools
EMULATORS="x64 x128 xcbm2 xpet xplus4 xvic"
TOOLS="c1541 petcat cartconv"

# define data files for emulators
ROM_COMMON="DRIVES PRINTER"
ROM_x64=C64
ROM_x128=C128
ROM_xcbm2=CBM-II
ROM_xpet=PET
ROM_xplus4=PLUS4
ROM_xvic=VIC20
# files to remove from ROM directory
ROM_REMOVE="Makefile* {beos,amiga,dos,os2,win}*.vkm"
DOC_REMOVE="Makefile* texi2html *.tex *.texi MSDOS* Minix* *.beos *.dos Win32*"
# define droppable file types
DROP_TYPES="d64|d71|d81|tap|prg|p00"

# launcher script
LAUNCHER=x11-launcher.sh

# use platypus or launcher directly
PLATYPUS_PATH=/usr/local/bin/platypus
if [ -e $PLATYPUS_PATH -a "$NO_PLATYPUS" = "" ]; then
  echo "  using platypus"
  PLATYPUS=1
else
  echo "  using launcher only"
  PLATYPUS=0
fi

# make sure icon is available
if [ ! -e $RUN_PATH/VICE.icns ]; then
  echo "ERROR: missing icon: $RUNPATH/VICE.icns"
  exit 1
fi

# make sure Info.plist is available
if [ ! -e $RUN_PATH/Info.plist ]; then
  echo "ERROR: missing: $RUN_PATH/Info.plist"
  exit 1
fi

# --- create VICE bundle ---
APP_NAME=$BUILD_DIR/VICE.app
APP_CONTENTS=$APP_NAME/Contents
APP_MACOS=$APP_CONTENTS/MacOS
APP_RESOURCES=$APP_CONTENTS/Resources
APP_ROMS=$APP_RESOURCES/ROM
APP_DOCS=$APP_RESOURCES/doc
APP_BIN=$APP_RESOURCES/bin
APP_LIB=$APP_RESOURCES/lib
APP_ETC=$APP_RESOURCES/etc
  
echo -n "  bundling VICE.app: "  
if [ "$PLATYPUS" = "1" ]; then
  # --- use platypus for bundling ---
  echo -n "[platypus] "
  $PLATYPUS_PATH \
      -a VICE \
      -o none \
      -i $RUN_PATH/VICE.icns \
      -V "$VICE_VERSION" \
      -u "The VICE Team" \
      -I "org.viceteam.VICE" \
      -D -X "$DROP_TYPES" \
      $RUN_PATH/$LAUNCHER $APP_NAME

  # where is the launcher script
  LAUNCHER_SCRIPT_REL="Resources/script"
  # make launcher executable
  chmod 755 $APP_RESOURCES/script
else
  # --- (old) bundling without platypus ---
  # create directory structure
  echo -n "[app dirs] "
  mkdir -p $APP_CONTENTS
  mkdir -p $APP_MACOS
  mkdir -p $APP_RESOURCES

  # copy icons
  echo -n "[icons] "
  cp $RUN_PATH/VICE.icns $APP_RESOURCES/

  # setup Info.plist
  echo -n "[Info.plist] "
  sed -e "s/XVERSIONX/$VICE_VERSION/g" \
    < $RUN_PATH/Info.plist > $APP_CONTENTS/Info.plist

  # copy launcher
  echo -n "[launcher] "
  if [ ! -e $RUN_PATH/$LAUNCHER ]; then
    echo "ERROR: missing launcher script: $RUNPATH/$LAUNCHER"
    exit 1
  fi
  MAIN_PROG=$APP_MACOS/VICE
  cp $RUN_PATH/$LAUNCHER $MAIN_PROG
  chmod 755 $MAIN_PROG

  # where is the launcher script
  LAUNCHER_SCRIPT_REL="MacOS/VICE"
fi

echo -n "[dirs] "
mkdir -p $APP_ROMS
mkdir -p $APP_DOCS
mkdir -p $APP_BIN

# copy roms and data into bundle
echo -n "[common ROMs] "
for rom in $ROM_COMMON ; do
  if [ ! -d $TOP_DIR/data/$rom ]; then
    echo "ERROR: missing ROM: $TOP_DIR/data/$rom"
    exit 1
  fi
  cp -r $TOP_DIR/data/$rom $APP_ROMS/
  (cd $APP_ROMS/$rom && eval "rm -f $ROM_REMOVE")
done

# copy html docs into bundle
echo -n "[docs] "
cp -r $TOP_DIR/doc/html/* $APP_DOCS/
(cd $APP_DOCS && eval "rm -f $DOC_REMOVE")

# embed c1541
echo -n "[c1541] "
if [ ! -e src/c1541 ]; then
  echo "ERROR: missing binary: src/c1541"
  exit 1
fi
cp src/c1541 $APP_BIN/

# strip embedded c1541 binary
if [ x"$STRIP" = "xstrip" ]; then
  echo -n "[strip c1541] "
  /usr/bin/strip $APP_BIN/c1541
fi

# any dylibs required?
if [ -d lib ]; then
  mkdir -p $APP_LIB
  DYLIBS=`find lib -name *.dylib`
  NUMDYLIBS=`echo $DYLIBS | wc -w`
  echo -n "[dylibs"
  for lib in $DYLIBS ; do
    echo -n "."
    cp $lib $APP_LIB
  done
  echo -n "] "
fi

# any config files from /etc?
if [ -d etc ]; then
  mkdir -p $APP_ETC
  echo -n "[etc"
  (cd etc && tar cf - *) | (cd "$APP_ETC" && tar xf -)
  echo -n "] "
fi  

# ready with bundle
echo

# --- embed emulators ---
for emu in $EMULATORS ; do
  echo -n "  embedding $emu: "
  
  # copy binary
  echo -n "[binary] "
  if [ ! -e src/$emu ]; then
    echo "ERROR: missing binary: src/$emu"
    exit 1
  fi
  cp src/$emu $APP_BIN/$emu
  
  # strip binary
  if [ x"$STRIP" = "xstrip" ]; then
    echo -n "[strip] "
    /usr/bin/strip $APP_BIN/$emu
  fi

  # copy emulator ROM
  eval "ROM=\${ROM_$emu}"
  echo -n "[ROM=$ROM] "
  if [ ! -d $TOP_DIR/data/$ROM ]; then
    echo "ERROR: missing ROM: $TOP_DIR/data/$ROM"
    exit 1
  fi
  cp -r $TOP_DIR/data/$ROM $APP_ROMS/
  (cd $APP_ROMS/$ROM && eval "rm -f $ROM_REMOVE")
  
  # ready
  echo
done

# --- copy tools ---
for tool in $TOOLS ; do
  echo -n "  copying tool $tool: "

  # copy binary
  echo -n "[binary] "
  if [ ! -e src/$tool ]; then
    echo "ERROR: missing binary: src/$tool"
    exit 1
  fi
  cp src/$tool $TOOL_DIR/
  
  # strip binary
  if [ x"$STRIP" = "xstrip" ]; then
    echo -n "[strip] "
    /usr/bin/strip $TOOL_DIR/$tool
  fi

  # ready
  echo
done

# --- copy command line launcher ---
echo "  copying command line launcher"
if [ ! -e "$RUN_PATH/vice-launcher.sh" ]; then
  echo "Error: '$RUN_PATH/vice-launcher.sh' is missing!"
  exit 1
fi
cp $RUN_PATH/vice-launcher.sh $TOOL_DIR
chmod 755 $TOOL_DIR/vice-launcher.sh
for emu in $EMULATORS ; do
  (cd $TOOL_DIR && ln -sf vice-launcher.sh $emu)
done

# --- copy docs ---
echo "  copying documents"
cp $TOP_DIR/FEEDBACK $BUILD_DIR/FEEDBACK.txt
cp $TOP_DIR/README $BUILD_DIR/README.txt
cp -r $TOP_DIR/doc $BUILD_DIR/
find $BUILD_DIR/doc -name "Makefile*" -exec rm {} \;
(cd $BUILD_DIR/doc && eval "rm -f $DOC_REMOVE")
mv $BUILD_DIR/doc/ReadmeMacOSX.txt $BUILD_DIR/

# --- make dmg? ---
if [ x"$ZIP" = "xnozip" ]; then
  echo "ready. created dist directory: $BUILD_DIR"
  du -sh $BUILD_DIR
else
  # image name
  BUILD_IMG=$BUILD_DIR.dmg
  BUILD_TMP_IMG=$BUILD_DIR.tmp.dmg
  
  # Create the image and format it
  echo "  creating DMG"
  hdiutil create -srcfolder $BUILD_DIR $BUILD_TMP_IMG -volname $BUILD_DIR -ov -quiet 

  # Compress the image
  echo "  compressing DMG"
  hdiutil convert $BUILD_TMP_IMG -format UDZO -o $BUILD_IMG -ov -quiet
  rm -f $BUILD_TMP_IMG

  echo "ready. created dist file: $BUILD_IMG"
  du -sh $BUILD_IMG
  md5 -q $BUILD_IMG
fi
