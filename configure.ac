AC_INIT([virtfs], [0.1], [steve.shuo.feng@gmail.com])

AC_PREREQ([2.59d])
AC_CONFIG_MACRO_DIR([m4])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE([foreign -Wall])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES(yes)])
AC_CONFIG_HEADERS(include/config.h)

AC_GNU_SOURCE

AM_PROG_AR
AC_PROG_LIBTOOL
AC_PROG_CC_STDC
AC_SYS_LARGEFILE
AC_PROG_MKDIR_P
AM_PROG_CC_C_O

case $target_os in
     *linux*)	arch=linux;;
     *freebsd*) arch=freebsd;;
     *)	        arch=unknown;;
esac

AC_ARG_ENABLE(example,
	[  --enable-example        Compile with examples ])

if test "$enable_example" != "no"; then
	OPTION_DIRS="$OPTION_DIRS example/dd";
fi
AC_SUBST([OPTION_DIRS])

AM_CONDITIONAL(LINUX, test "$arch" = linux)
AM_CONDITIONAL(FREEBSD, test "$arch" = freebsd)

AC_CONFIG_FILES([Makefile include/Makefile lib/Makefile example/dd/Makefile])

AC_OUTPUT
