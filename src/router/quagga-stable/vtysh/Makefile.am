## Process this file with Automake to create Makefile.in

INCLUDES = @INCLUDES@ -I$(top_srcdir) -I$(top_srcdir)/lib
DEFS = @DEFS@ -DSYSCONFDIR=\"$(sysconfdir)/\"

LIBS = @LIBS@ @CURSES@ @LIBPAM@

bin_PROGRAMS = vtysh

vtysh_SOURCES = vtysh_main.c vtysh.c vtysh_user.c vtysh_config.c
nodist_vtysh_SOURCES = vtysh_cmd.c
CLEANFILES = vtysh_cmd.c
noinst_HEADERS = vtysh.h vtysh_user.h
vtysh_LDADD = ../lib/libzebra.la @LIBCAP@

examplesdir = $(exampledir)
dist_examples_DATA = vtysh.conf.sample

EXTRA_DIST = extract.pl

rebuild4:
	./extract.pl $(top_srcdir)/zebra/*.c $(top_srcdir)/ripd/*.c $(top_srcdir)/ospfd/*.c $(top_srcdir)/bgpd/*.c $(top_srcdir)/isisd/*.c $(top_srcdir)/lib/keychain.c $(top_srcdir)/lib/routemap.c $(top_srcdir)/lib/filter.c $(top_srcdir)/lib/plist.c $(top_srcdir)/lib/distribute.c $(top_srcdir)/lib/if_rmap.c > vtysh_cmd.c

vtysh_cmd.c: $(top_srcdir)/ripd/*.c $(top_srcdir)/ripngd/*.c $(top_srcdir)/ospfd/*.c $(top_srcdir)/ospf6d/*.c \
  $(top_srcdir)/isisd/*.c $(top_srcdir)/bgpd/*.c $(top_srcdir)/lib/keychain.c $(top_srcdir)/lib/routemap.c \
  $(top_srcdir)/lib/filter.c $(top_srcdir)/lib/plist.c $(top_srcdir)/lib/distribute.c $(top_srcdir)/lib/if_rmap.c \
  $(top_srcdir)/lib/vty.c $(top_srcdir)/zebra/debug.c $(top_srcdir)/zebra/interface.c \
  $(top_srcdir)/zebra/irdp_interface.c $(top_srcdir)/zebra/rtadv.c $(top_srcdir)/zebra/zebra_vty.c \
  $(top_srcdir)/zebra/zserv.c $(top_srcdir)/zebra/router-id.c
	./extract.pl $(top_srcdir)/ripd/*.c $(top_srcdir)/ripngd/*.c $(top_srcdir)/ospfd/*.c $(top_srcdir)/ospf6d/*.c \
	  $(top_srcdir)/isisd/*.c $(top_srcdir)/bgpd/*.c $(top_srcdir)/lib/keychain.c $(top_srcdir)/lib/routemap.c \
	  $(top_srcdir)/lib/filter.c $(top_srcdir)/lib/plist.c $(top_srcdir)/lib/distribute.c $(top_srcdir)/lib/if_rmap.c \
	  $(top_srcdir)/lib/vty.c $(top_srcdir)/zebra/debug.c $(top_srcdir)/zebra/interface.c  \
	  $(top_srcdir)/zebra/irdp_interface.c $(top_srcdir)/zebra/rtadv.c $(top_srcdir)/zebra/zebra_vty.c \
	  $(top_srcdir)/zebra/zserv.c $(top_srcdir)/zebra/router-id.c > vtysh_cmd.c

