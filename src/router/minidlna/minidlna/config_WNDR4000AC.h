/* MiniDLNA Project
 * http://sourceforge.net/projects/minidlna/
 * (c) 2008-2009 Justin Maggard
 * generated by ./genconfig.sh on Thu Apr 15 19:36:48 CST 2010 */
#ifndef __CONFIG_H__
#define __CONFIG_H__

#define OS_NAME		"Linux"
#define OS_VERSION	"Linux 2.6"
#define OS_URL		"http://www.netgear.com/"

/* full path of the file database */
#define DEFAULT_DB_PATH	"/tmp/db"

/* Comment the following line to use home made daemonize() func instead
 * of BSD daemon() */
#define USE_DAEMON

/* Enable if the system inotify.h exists.  Otherwise our own inotify.h will be used. */
#define HAVE_INOTIFY_H

/* Enable if the system iconv.h exists.  ID3 tag reading in various character sets will not work properly otherwise. */
//#define HAVE_ICONV_H

/* Enable NETGEAR-specific tweaks. */
#define NETGEAR
/* Enable ReadyNAS-specific tweaks. */
/*#define READYNAS*/
/* Compile in TiVo support. */
#define TIVO_SUPPORT

#endif
