#ifndef included_dap_tv_h
#define included_dap_tv_h

/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 1989-2008 Morgan Stanley All rights reserved.*/
/* See .../src/LICENSE for terms of distribution.                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/


/* header file inclusions */
#include <sys/time.h>

/* external macro declarations */
#define MILLION_USECS	((long)(1000000))

/* external function declarations */
# ifdef __cplusplus
extern "C" {
# endif
  extern int tvdiff(struct timeval *,struct timeval *,struct timeval *);
  extern int tvnorm(struct timeval *);
  extern char *tvstring(struct timeval *);
  extern int tvsum(struct timeval *,struct timeval *,struct timeval *);
# ifdef __cplusplus
}
# endif
#endif

