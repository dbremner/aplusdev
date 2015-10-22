#ifndef included_dap_misc_h
#define included_dap_misc_h

/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 1989-2008 Morgan Stanley All rights reserved.*/
/* See .../src/LICENSE for terms of distribution.                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/


/* header file inclusions */
#include <sys/types.h>
#include <sys/uio.h>
#include <dap/notsunos4.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <dap/buff.h>

/* external macro declarations */
#define CHARAT(np)		((char *)((np)->d))
#define UINTAT(np)		((unsigned)((np)->d))

/* round v to r, the lim inf { i : ((i % m) == 0) && (i >= v)} */
#define MODRNDUP(v, m)	(((v) + (m)) - (1 + ((((v) + (m)) - 1) % (m))))

/* external data declarations */
extern int dapbreak;
extern int dapInitialized;
extern int dapZeroTimeout;
extern char hostname_l[];
extern int parity[];

/* external function declarations */
# ifdef __cplusplus
extern "C" {
# endif
  extern int BcdPack( char *,int, unsigned char * );
  extern int BcdUnpack( unsigned char *, int, char * );
  extern int PrAscDecode( int, struct buff *,int );
  extern void PrAscEncode( int, struct buff * );
  extern void daploop(void);
  extern void dapselect();
  extern void dapterm();
  extern int dapversion();
  extern void doclose(int);
  extern int doread(int, char *, int );
  extern int doselect( int, fd_set *, fd_set *, fd_set *, struct timeval * );
  extern int dowrite( int, char *, int );
  extern char *hostname();
  extern int mod255();
  extern void noop();
  extern struct sockaddr_in *servname_in( char *, int * );
  extern int ulbetween();
# ifdef __cplusplus
}
# endif

#endif

