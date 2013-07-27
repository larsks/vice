#! /bin/bash

# list of all VALID arch-dependent global defines
ARCHDEFS+=" WIN32"
ARCHDEFS+=" _WIN64"
ARCHDEFS+=" MACOSX_COCOA"
ARCHDEFS+=" __OS2__"
ARCHDEFS+=" __BEOS__"
ARCHDEFS+=" __MSDOS__"
ARCHDEFS+=" AMIGA_SUPPORT"
ARCHDEFS+=" AMIGA_AROS"
ARCHDEFS+=" AMIGA_M68K"
ARCHDEFS+=" AMIGA_MORPHOS"
ARCHDEFS+=" USE_SDLUI"
ARCHDEFS+=" USE_GNOMEUI"
ARCHDEFS+=" USE_XAWUI"
ARCHDEFS+=" USE_BEOS_UI"
ARCHDEFS+=" DINGOO_NATIVE"
ARCHDEFS+=" DINGUX_SDL"
ARCHDEFS+=" __XBOX__"
ARCHDEFS+=" ANDROID_COMPILE"
ARCHDEFS+=" ANDROID"
ARCHDEFS+=" __INTERIX"
# todo: seperated check for CPU defs, exclude "platform" dir
ARCHDEFS+=" __i386__"
ARCHDEFS+=" __i486__"
ARCHDEFS+=" __i586__"
ARCHDEFS+=" __i686__"
ARCHDEFS+=" __x86_64__"
ARCHDEFS+=" __amd64__"

# list of OBSOLETE global arch-dependent defines. whenever one gets removed or
# even just renamed, add it here
OBSOLETEARCHDEFS+=" MSDOS"
OBSOLETEARCHDEFS+=" OS2"
OBSOLETEARCHDEFS+=" GP2X"
OBSOLETEARCHDEFS+=" GP2X_SDL"
OBSOLETEARCHDEFS+=" WIZ"
OBSOLETEARCHDEFS+=" riscos"
OBSOLETEARCHDEFS+=" __riscos"
OBSOLETEARCHDEFS+=" __riscos__"
OBSOLETEARCHDEFS+=" __RISCOS__"

# list of all valid compiler specific global defines
CCARCHDEFS+=" __GNUC__"
CCARCHDEFS+=" _MSC_VER"
CCARCHDEFS+=" WINVER"
CCARCHDEFS+=" WATCOM_COMPILE"
CCARCHDEFS+=" __WATCOMC__"
CCARCHDEFS+=" __VBCC__"
CCARCHDEFS+=" __ICC"
CCARCHDEFS+=" __DMC__"

# list of OBSOLETE resources. whenever a resource gets removed or even just
# renamed, it should get added here (comment them out if no more are left)
#OBSOLETERESOURCES+=" RomsetKernalName"
#OBSOLETERESOURCES+=" RomsetBasicName"
#OBSOLETERESOURCES+=" RomsetBasic64Name"
#OBSOLETERESOURCES+=" RomsetBasicHiName"
#OBSOLETERESOURCES+=" RomsetBasicLoName"
#OBSOLETERESOURCES+=" RomsetBasicName"
#OBSOLETERESOURCES+=" RomsetCart1Name"
#OBSOLETERESOURCES+=" RomsetCart2Name"
#OBSOLETERESOURCES+=" RomsetCart4Name"
#OBSOLETERESOURCES+=" RomsetCart6Name"
#OBSOLETERESOURCES+=" RomsetChargenDEName"
#OBSOLETERESOURCES+=" RomsetChargenFRName"
#OBSOLETERESOURCES+=" RomsetChargenIntName"
#OBSOLETERESOURCES+=" RomsetChargenName"
#OBSOLETERESOURCES+=" RomsetChargenSEName"
#OBSOLETERESOURCES+=" RomsetDosName1001"
#OBSOLETERESOURCES+=" RomsetDosName1541"
#OBSOLETERESOURCES+=" RomsetDosName1541ii"
#OBSOLETERESOURCES+=" RomsetDosName1551"
#OBSOLETERESOURCES+=" RomsetDosName1570"
#OBSOLETERESOURCES+=" RomsetDosName1571"
#OBSOLETERESOURCES+=" RomsetDosName1571cr"
#OBSOLETERESOURCES+=" RomsetDosName1581"
#OBSOLETERESOURCES+=" RomsetDosName2000"
#OBSOLETERESOURCES+=" RomsetDosName2031"
#OBSOLETERESOURCES+=" RomsetDosName2040"
#OBSOLETERESOURCES+=" RomsetDosName3040"
#OBSOLETERESOURCES+=" RomsetDosName4000"
#OBSOLETERESOURCES+=" RomsetDosName4040"
#OBSOLETERESOURCES+=" RomsetEditorName"
#OBSOLETERESOURCES+=" RomsetFunctionHighName"
#OBSOLETERESOURCES+=" RomsetFunctionLowName"
#OBSOLETERESOURCES+=" RomsetH6809RomAName"
#OBSOLETERESOURCES+=" RomsetH6809RomBName"
#OBSOLETERESOURCES+=" RomsetH6809RomCName"
#OBSOLETERESOURCES+=" RomsetH6809RomDName"
#OBSOLETERESOURCES+=" RomsetH6809RomEName"
#OBSOLETERESOURCES+=" RomsetH6809RomFName"
#OBSOLETERESOURCES+=" RomsetKernal64Name"
#OBSOLETERESOURCES+=" RomsetKernalDEName"
#OBSOLETERESOURCES+=" RomsetKernalFIName"
#OBSOLETERESOURCES+=" RomsetKernalFRName"
#OBSOLETERESOURCES+=" RomsetKernalITName"
#OBSOLETERESOURCES+=" RomsetKernalIntName"
#OBSOLETERESOURCES+=" RomsetKernalNOName"
#OBSOLETERESOURCES+=" RomsetKernalName"
#OBSOLETERESOURCES+=" RomsetKernalSEName"
#OBSOLETERESOURCES+=" RomsetRomModule9Name"
#OBSOLETERESOURCES+=" RomsetRomModuleAName"
#OBSOLETERESOURCES+=" RomsetRomModuleBName"

OBSOLETERESOURCES+=" UseVicII"
OBSOLETERESOURCES+=" SidParSIDport"
OBSOLETERESOURCES+=" REUfirstUnusedRegister"

OBSOLETERESOURCES+=" PALEmulation"
OBSOLETERESOURCES+=" VICIIScale2x"
OBSOLETERESOURCES+=" VICScale2x"
OBSOLETERESOURCES+=" TEDScale2x"
OBSOLETERESOURCES+=" ColorSaturation"
OBSOLETERESOURCES+=" ColorContrast"
OBSOLETERESOURCES+=" ColorBrightness"
OBSOLETERESOURCES+=" ColorGamma"
OBSOLETERESOURCES+=" ColorTint"
OBSOLETERESOURCES+=" PALScanLineShade"
OBSOLETERESOURCES+=" PALBlur"
OBSOLETERESOURCES+=" PALOddLinePhase"
OBSOLETERESOURCES+=" PALOddLineOffset"

################################################################################

function findifdefs
{
    echo "checking define: \"$1\""
    find -wholename './arch' -prune -o -name '*.[ch]' -print | xargs grep -n '#if' | sed 's:\(.*\)$:\1^:g' | grep "$1[ )^]" | sed 's:\(.*\)^$:\1:g' 
    echo " "
}

function findifdefsfulltree
{
    echo "checking define: \"$1\""
    find -name '*.[ch]' -print | xargs grep -n '#if' | sed 's:\(.*\)$:\1^:g' | grep "$1[ )^]" | sed 's:\(.*\)^$:\1:g' 
    echo " "
}

function finddefsfiles
{
    FILES+=`find -wholename './arch' -prune -o -name '*.[ch]' -print | xargs grep '#if' | sed 's:\(.*\)$:\1^:g' | grep "$1[ )^]" | sed 's:\(.*\)^$:\1:g' | sed 's/\(.*[ch]:\).*/\1/'`
}

function finddefsfilesfulltree
{
    FILES+=`find -name '*.[ch]' -print | xargs grep '#if' | sed 's:\(.*\)$:\1^:g' | grep "$1[ )^]" | sed 's:\(.*\)^$:\1:g' | sed 's/\(.*[ch]:\).*/\1/'`
}

function findres
{
    echo "checking resource: \"$1\""
    find -name '*.[ch]' -print | xargs grep -in '"'$1'"'
}

################################################################################

function findprintfs
{
echo "-------------------------------------------------------------------------"
echo "- fprintf to stdout/stderr in portable code (should perhaps go to log)"
echo "-"
find -wholename './arch' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -name '*.[ch]' -print | xargs grep -n 'printf' | grep 'fprintf *( *std'
echo "-------------------------------------------------------------------------"
echo "- printf in portable code (should perhaps go to log)"
echo "-"
find -wholename './arch' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -name '*.[ch]' -print | xargs grep -n ' printf'
find -wholename './arch' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -name '*.[ch]' -print | xargs grep -n '^printf'

echo "-------------------------------------------------------------------------"
echo "- fprintf to stdout/stderr in archdep code (should go to log if debug output)"
echo "-"
find -wholename './arch/win32/utils' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -wholename "./arch/*" -a  -name '*.[ch]' -print | xargs grep -n 'printf' | grep 'fprintf *( *std'
echo "-------------------------------------------------------------------------"
echo "- printf in archdep code (should go to log if debug output)"
echo "-"
find -wholename './arch/win32/utils' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -wholename "./arch/*" -a -name '*.[ch]' -print | xargs grep -n ' printf'
find -wholename './arch/win32/utils' -prune -o -wholename './bin2c.c' -prune -o -wholename './cartconv.c' -prune -o -wholename './petcat.c' -prune -o -wholename './c1541.c' -prune -o -wholename "./arch/*" -a  -name '*.[ch]' -print | xargs grep -n '^printf'
}

function finddefs
{
FILES=""

echo "-------------------------------------------------------------------------"
echo "- archdep defines found in portable code (eliminate if possible)"
echo "-" $ARCHDEFS
echo " "

for I in $ARCHDEFS; do
    findifdefs $I
done

echo "-------------------------------------------------------------------------"
echo "- list of all files containing archdep defines in portable code:"

for I in $ARCHDEFS; do
    finddefsfiles $I
done

echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u
#echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u | wc -l
}

function findccdefs
{
FILES=""

echo "-------------------------------------------------------------------------"
echo "- compiler specific defines (these should be avoided!):"
echo "-" $CCARCHDEFS
echo " "

for I in $CCARCHDEFS; do
    findifdefsfulltree $I
done

echo "-------------------------------------------------------------------------"
echo "- list of all files containing compiler specific defines:"

for I in $CCARCHDEFS; do
    finddefsfilesfulltree $I
done

echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u
#echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u | wc -l
}

function findobsolete
{
FILES=""

echo "-------------------------------------------------------------------------"
echo "- obsolete defines (these should be fixed/removed!):"
echo "-" $OBSOLETEARCHDEFS
echo " "

for I in $OBSOLETEARCHDEFS; do
    findifdefsfulltree $I
done

echo "-------------------------------------------------------------------------"
echo "- list of all files containing obsolete defines:"

for I in $OBSOLETEARCHDEFS; do
    finddefsfilesfulltree $I
done

echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u
#echo $FILES | tr ':' '\n' | sed 's:^ ::' | sort -u | wc -l
}

function findresources
{
echo "-------------------------------------------------------------------------"
echo "- checking various obsolete resources (which might have either been"
echo "- removed or renamed)."
echo "-"
for I in $OBSOLETERESOURCES; do
    findres $I
done
}

################################################################################
function usage
{
    echo "usage: findhacks.sh <option>"
    echo "where option is one of:"
    echo "archdep   - find arch dependant ifdefs in portable code"
    echo "ccarchdep - find compiler specific ifdefs"
    echo "obsolete  - find obsolete ifdefs"
    echo "printf    - find printfs (which perhaps should go to the log instead)"
    echo "res       - find obsolete resources"
    echo "all       - all of the above"
    exit
}
################################################################################

case $1 in
    archdep)
        finddefs ;;
    ccarchdep)
        findccdefs ;;
    obsolete)
        findobsolete ;;
    printf)
        findprintfs ;;
    res)
        findresources ;;
    all)
        finddefs
        findccdefs
        findobsolete
        findprintfs
        findresources ;;
    *)
        usage ;;
esac
