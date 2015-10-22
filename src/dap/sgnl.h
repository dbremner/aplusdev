#ifndef included_dap_sgnl_h
#define included_dap_sgnl_h

/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 1989-2008 Morgan Stanley All rights reserved.*/
/* See .../src/LICENSE for terms of distribution.                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/


/* header file inclusions */
#include <signal.h>
#ifndef NSIG
#define NSIG _sys_nsig
#endif


/* external struct, union, typedef and enum declarations */
struct sgnl
{
	int set;
#if defined(HAVE_SIGACTION)
	struct sigaction orig;
#else
	struct sigvec orig;
#endif
	int flag;
	void (*func)();
};

/* external data declarations */
extern struct sgnl sgnls[];

/* external function declarations */
# ifdef __cplusplus
extern "C" {
# endif
  extern void sgnlcatch(int,void (*)());
  extern void sgnldefault(int);
  extern void sgnlignore(int);
  extern void sgnloriginal(int);
  extern int sgnlproc(void);
# ifdef __cplusplus
}
# endif

#endif

