extern pcap_t *pcap;
extern int pcap_fd;

/*
 * How many bytes should we examine on every packet that comes off the
 * wire?  This doesn't include the link layer which is accounted for
 * later.  We're looking only for ICMP and TCP packets, so this should
 * work.  For ICMP, we also examine the quoted IP header, which is why
 * there's a *2 there.  The +32 is just to be safe.
 */

#define SNAPLEN	 (LIBNET_IPV4_H * 2 + \
	(LIBNET_TCP_H > LIBNET_ICMPV4_H ? LIBNET_TCP_H : LIBNET_ICMPV4_H) + 32)

void initcapture(void);
int capture(proberecord *);
