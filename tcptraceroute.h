#include <stdio.h> // cstdio
#include <stdlib.h>
#include <string.h> 
#include <unistd.h> // Two important Symbolica constancts comes from here.
#include <ctype.h>  // Character classification and mapping support
#include <time.h> // 6.10 book- The basic time service provided by UNIX kernel counts the number of seconds that have passed since the Epoch: 00:00:00.
#include <errno.h> // 1.7 book- Error Handling.
#include <sys/types.h> // 2.8 book- primitive system data types.
#include <sys/socket.h> // Chapter 16.
#include <netinet/in.h> // Section 16.3 -> Internet address family? (netinet/tcp.h)
#include <netdb.h> // network database operation.
#include <sys/ioctl.h> /* BSD and Linux */ // has always been the catchall for I/O operations.
#include <fcntl.h> // (Section 3.14) file control library
#include <arpa/inet.h>  // Capter 16 This is basically ARPA! internet definition.
#include <libnet.h> // Make sure you have it installed -> prereq.txt
#include <pcap.h> // Make sure you have it installed -> prereq.txt

/* Some earlier versions lacked support for double <net/if.h> inclusion */
#ifndef __OpenBSD__
#include <net/if.h>
#endif

#ifdef HAVE_CONFIG_H
#include "config.h" // config.h is the most important header but, it might not be needed as well.
#endif

//#define BANNER "Copyright (c) 2001-2015 Michael C. Toren <mct@toren.net>"

/* Buffer size used for a number of strings, including the pcap filter */
#define TEXTSIZE	1024

#ifndef LIBNET_VERSION
#define LIBNET_VERSION "UNKNOWN"
#endif

#ifndef LIBNET_ERRBUF_SIZE
#define LIBNET_ERRBUF_SIZE TEXTSIZE
#endif

#ifndef DEFAULT_PORT
#define DEFAULT_PORT 80
#endif

#include "datalink.h" // -> provided -> extra file.
#include "util.h" // -> provided -> extra file.
#include "probe.h" // -> provided -> extra file.
#include "capture.h" // -> provided -> extra file.

extern u_long dst_ip, src_ip, isn;  //u_long ( pointer that is defined in the util.h)
extern u_short src_prt, dst_prt; //u_long ?
extern char *device, *name, *dst, *src;
extern char dst_name[], dst_prt_name[], filter[], errbuf[];
extern int datalink, offset; //datalink.h & datalink.c
extern int o_minttl, o_maxttl, o_timeout, o_debug, o_numeric, o_pktlen,
	o_nqueries, o_dontfrag, o_tos, o_forceport, o_syn, o_ack, o_ecn,
	o_nofilter, o_nogetinterfaces, o_noselect, o_trackport, o_dnat,
	o_isn;

extern char *optarg;
extern int optind, opterr, optopt;