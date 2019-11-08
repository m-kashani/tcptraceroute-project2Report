//#if (LIBNET_API_VERSION < 110)
//	extern int sockfd;
//#else
extern libnet_t *libnet_context;
//#endif

/* ECN (RFC2481) */
#ifndef TH_ECN
#define TH_ECN  0x40
#endif
#ifndef TH_CWR
#define TH_CWR  0x80
#endif

/* How many IP IDs should allocateid() remember? */
#define ALLOCATEID_CACHE_SIZE 512

/* probe() returns this structure, which describes the probe packet sent */
typedef struct {
	int ttl, q;
	u_short id, src_prt, dnat_dport;
	struct timeval timestamp;
	double delta;
	u_long addr, dnat_ip;
	char *state;
	char *string;
} proberecord;

proberecord *newproberecord(void);
void freeproberecord(proberecord *);
u_short allocateport(u_short);
u_short allocateid(void);
void showprobe(proberecord *);
void initlibnet(void);
void probe(proberecord *, int, int);