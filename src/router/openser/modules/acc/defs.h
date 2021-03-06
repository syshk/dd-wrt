/*
 * $Id: defs.h,v 1.1.1.1 2005/06/13 16:47:31 bogdan_iancu Exp $
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * ---------
 * 2003-04-04  grand acc cleanup (jiri)
 * 2003-11-04  multidomain support for mysql introduced (jiri)
 */

#ifndef _ACC_DEFS_H
#define _ACC_DEFS_H

/* method, in-uri, out-uri, callid, from, status */
#define DEFAULT_LOG_FMT "miocfs"
/* c: Callid, d: to-tag (Dst), f: From, i: In-uri, m: Method, o: Out-uri, 
 * r: fRom-tag, s: Status,  t: To, u: digest User_id, p: userPart in-uri,
 * 0: From Uri Userpart, 1: To Uri Userpart, F: From uri , T: To uri,
 * U: User (digest, from-uri otherwise), S: 3-digit Status code, 
 * n: cseq Number, D: domain  */ 
#define ALL_LOG_FMT "cdfimorstup01FTUSnDX"
#define ALL_LOG_FMT_LEN (sizeof(ALL_LOG_FMT)-1)

#ifdef SQL_ACC
/* username and domain taken from From header-field (0X) */
#	define SQL_ACC_FMT "FTmiofcts0drX"
/* username and domain taken from request-uri (pD) */
#	define SQL_MC_FMT  "FTmiofctspdrD"
#endif

/* caution: keep consistent with definition of rad_attr */
#ifdef RAD_ACC
#	define RAD_ACC_FMT "FTocdrn"
#	define RAD_ACC_FMT_LEN  (sizeof(RAD_ACC_FMT)-1)
#endif

#ifdef DIAM_ACC
#	define DIAM_ACC_FMT "FTocdrn"
#	define DIAM_ACC_FMT_LEN  (sizeof(DIAM_ACC_FMT)-1)
/* information needed for reading messages from tcp connection */
typedef struct rd_buf
{
	unsigned int first_4bytes;
	unsigned int buf_len;
	unsigned char *buf;
} rd_buf_t;
#endif


#endif
