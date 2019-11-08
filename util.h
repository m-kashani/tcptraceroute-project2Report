#define IPTOSBUFFERS	12
#define IPTOSBUFSIZ		(4*3+3+1)  /* Four three-digit numbers, three dots, and NUL */

/*
 * A generic wrapper for libnet_name_resolve and libnet_name2addr4, because
 * it's annoying to have #ifdef's all over the place to support both versions
 * of libnet.
 */

//#if (LIBNET_API_VERSION < 110)
//#define hosttoip(hostname, numeric) libnet_name_resolve((u_char *)hostname, numeric)
//#else
#define hosttoip(hostname, numeric) libnet_name2addr4(libnet_context, (char *)hostname, numeric)
//#endif

void fatal(char *, ...);
void debug(char *, ...);
void warn(char *, ...);
void pfatal(char *);
void usage(void);
void about(void);
void *xrealloc(void *, int);
char *safe_strncpy(char *, char *, int);
int safe_snprintf(char *, int, char *, ...);
char *sprintable(char *);
int isnumeric(char *);
struct timeval tvdiff(struct timeval *, struct timeval *);
int tvsign(struct timeval *);
char *iptos(u_long);
char *iptohost(u_long);
void debugoptions(void);