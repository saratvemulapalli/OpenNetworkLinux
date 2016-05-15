/****************************************************************************
 *
 * OpenNSLDriver Internal Header
 *
 *****************************************************************************/
#ifndef __OPENNSLDRIVER_H__
#define __OPENNSLDRIVER_H__

#include <indigo/memory.h>
#include <indigo/error.h>
#include <loci/loci.h>

#include <Forwarding/forwarding.h>

extern int fwd_init_done;
#define FWD_INIT_CHECK if (!fwd_init_done) return INDIGO_ERROR_INIT;








#endif
