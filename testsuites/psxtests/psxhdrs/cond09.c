/*
 *  This test file is used to verify that the header files associated with
 *  the callout are correct.
 *
 *  COPYRIGHT (c) 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996.
 *  On-Line Applications Research Corporation (OAR).
 *  All rights assigned to U.S. Government, 1994.
 *
 *  This material may be reproduced by or for the U.S. Government pursuant
 *  to the copyright license under the clause at DFARS 252.227-7013.  This
 *  notice must appear in all copies of this file and its derivatives.
 *
 *  $Id$
 */

#include <pthread.h>
 
#ifndef _POSIX_THREADS
#error "rtems is supposed to have pthread_condattr_setpshared"
#endif
#ifndef _POSIX_THREAD_PROCESS_SHARED
#error "rtems is supposed to have pthread_condattr_setpshared"
#endif

void test( void )
{
  pthread_condattr_t attribute;
  int                pshared;
  int                result;

  pshared = PTHREAD_PROCESS_SHARED;
  pshared = PTHREAD_PROCESS_PRIVATE;

  result = pthread_condattr_setpshared( &attribute, pshared );
}
