%define version 1.18
%define rel     1
%define prefix /usr/
Summary: VICE, the Versatile Commodore Emulator
Name: vice
Version: %version
Release: %rel
Copyright: GPL
Group: X11/Applications/Emulators
Source: ftp://ftp.funet.fi/pub/cbm/crossplatform/emulators/VICE/vice-%{version}.tar.gz
URL: http://www.viceteam.org/
Packager: Andreas Boose <viceteam@t-online.de>
BuildRoot: /var/tmp/vice-build-root

%description
VICE is a set of accurate emulators for the Commodore 64, 128, VIC20,
PET, Plus4 and CBM-II 8-bit computers, all of which run under the X
Window System.

%prep
%setup -q

%build
CFLAGS="$RPM_OPT_FLAGS -DNO_REGPARM" ./configure --prefix=%{prefix} --enable-fullscreen --with-sdl
make

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT%{prefix}
make prefix=$RPM_BUILD_ROOT%{prefix} install-strip
gzip -9 $RPM_BUILD_ROOT%{prefix}/man/man1/*
gzip -9 $RPM_BUILD_ROOT%{prefix}/info/*
mkdir -p $RPM_BUILD_ROOT%{_menudir}

%clean
rm -rf $RPM_BUILD_ROOT

%files

%doc AUTHORS FEEDBACK INSTALL README

%{prefix}/bin/x64
%{prefix}/bin/x128
%{prefix}/bin/xplus4
%{prefix}/bin/xvic
%{prefix}/bin/xpet
%{prefix}/bin/xcbm2
%{prefix}/bin/c1541
%{prefix}/bin/petcat
%{prefix}/bin/vsid
%{prefix}/lib/vice/
%{prefix}/man/man1/*
%{prefix}/info/vice.info*
%{prefix}/share/locale/*/LC_MESSAGES/vice.mo
%{prefix}/include/resid/*

%changelog
* Sun Dec 14 2003 Hoppar Tamas <linux-user@freemail.hu>
- fixed file filelist (some things missed)
- moved prefix to /usr
- enabled fullscreen and SDL support
