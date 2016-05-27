bin_PROGRAMS = dd.virtfs

if FREEBSD
AM_CPPFLAGS = -D__FREEBSD__
endif

if LINUX
AM_CPPFLAGS = -D__LINUX__
endif

LDADD = ../../lib/libvirtfs.la

dd_virtfs_SOURCES = args.c conv.c conv_tab.c dd.c misc.c
