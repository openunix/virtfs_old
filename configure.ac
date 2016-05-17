AC_INIT([virtfs], [0.1], [steve.shuo.feng@gmail.com])
AC_PREREQ([2.59d])
AC_CONFIG_MACRO_DIR([m4])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE([foreign -Wall])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES(yes)])
AC_CONFIG_HEADERS(include/config.h)

AC_GNU_SOURCE

AC_PROG_LIBTOOL
AC_PROG_CC_STDC
AC_SYS_LARGEFILE
AC_PROG_MKDIR_P
AM_PROG_CC_C_O

AC_ARG_ENABLE(example,
	[  --enable-example        Compile with examples ])

if test "$enable_example" != "no"; then
	OPTION_DIRS="$OPTION_DIRS example/dd";
fi

AC_SUBST([OPTION_DIRS])

AC_CONFIG_FILES([Makefile example/dd/Makefile])

AC_OUTPUT
