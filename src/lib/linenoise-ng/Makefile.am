# vim: set noet ts=8 sw=8 sts=8:
#
# Makefile.am to build liblinenoise-ng.a for VICE
#
#

AM_CPPFLAGS = @VICE_CPPFLAGS@
AM_CFLAGS = @VICE_CFLAGS@
AM_CXXFLAGS = @VICE_CXXFLAGS@ -Wno-unused-variable

noinst_LIBRARIES = liblinenoiseng.a

liblinenoiseng_a_SOURCES = \
			   ConvertUTF.cpp \
			   linenoise.cpp \
			   wcwidth.cpp



EXTRA_DIST = \
	     ConvertUTF.h \
	     linenoise.h

