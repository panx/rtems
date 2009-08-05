/*
 *  COPYRIGHT (c) 1989-2009.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */

#include <rtems/bspcmdline.h>

extern const char *bsp_boot_cmdline;

const char *bsp_cmdline_get(void)
{
  return bsp_boot_cmdline;
}