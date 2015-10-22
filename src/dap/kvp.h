#ifndef included_dap_kvp_h
#define included_dap_kvp_h

/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 1989-2008 Morgan Stanley All rights reserved.*/
/* See .../src/LICENSE for terms of distribution.                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/


/* header file inclusions */
#include <dap/node.h>

/* external macro declarations */
#define KVPAT(np)		((struct kvp *)((np)->d))

/* external struct, union, typedef and enum declarations */

/* key value pair */
struct kvp
{
	void *key;
	void *d;
};

/* external function declarations */
# ifdef __cplusplus
extern "C" {
# endif
  extern struct kvp *kvpalloc(void *,void *);
  extern struct node *kvpfind(struct node *,char *);
  extern void kvpfree(struct kvp *);
  extern struct node *kvpinsert(struct node *,void *,void *);
  extern void *kvpkey(struct node *);
  extern void kvpremove(struct node *);
  extern void kvpreplace(struct node *,void *);
  extern void *kvpvalue(struct node *);
# ifdef __cplusplus
}
# endif

#endif

