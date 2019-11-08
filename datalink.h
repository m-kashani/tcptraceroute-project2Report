/* array of supported datalink types */
extern struct datalinktype {
	int type, offset;
	char *name;
} datalinktypes[];

/* interface linked list, built by getinterfaces() */
extern struct interface_entry {
	char *name;
	u_long addr;
	struct interface_entry *next;
} *interfaces;

int datalinkoffset(int);
char *datalinkname(int);
void getinterfaces(void);
u_long findsrc(u_long);
char *finddev(u_long);