#ifndef included_dap_Warn_h
#define included_dap_Warn_h

/*****************************************************************************/
/*                                                                           */
/* Copyright (c) 1989-2008 Morgan Stanley All rights reserved.*/
/* See .../src/LICENSE for terms of distribution.                           */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/


/* header file inclusions */
#include <stdio.h>
#include <stdarg.h>

/* external data declarations */
extern char _ErrBuf[];

/* external function declarations */
# ifdef __cplusplus
    extern "C" {
# endif
  extern void vWarn(char *,va_list);
  extern void Warn(char*,...);
  extern void Abort(char*,...);
  extern void Panic(char*,...);
  extern void Exit(int, char*,...);
  extern void SetWarn(char*);
  extern void SetWarnFP(FILE*);
  extern void SetWarnFunc(void (*f)(char *));
# ifdef __cplusplus
   }
# endif


#endif

