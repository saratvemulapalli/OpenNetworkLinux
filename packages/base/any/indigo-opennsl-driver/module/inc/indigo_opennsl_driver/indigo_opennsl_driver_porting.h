/**************************************************************************//**
 *
 * @file
 * @brief indigo_opennsl_driver Porting Macros.
 *
 * @addtogroup indigo_opennsl_driver-porting
 * @{
 *
 *****************************************************************************/
#ifndef __INDIGO_OPENNSL_DRIVER_PORTING_H__
#define __INDIGO_OPENNSL_DRIVER_PORTING_H__


/* <auto.start.portingmacro(ALL).define> */
#if INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef INDIGO_OPENNSL_DRIVER_MALLOC
    #if defined(GLOBAL_MALLOC)
        #define INDIGO_OPENNSL_DRIVER_MALLOC GLOBAL_MALLOC
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_MALLOC malloc
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_MALLOC is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_FREE
    #if defined(GLOBAL_FREE)
        #define INDIGO_OPENNSL_DRIVER_FREE GLOBAL_FREE
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_FREE free
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_FREE is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define INDIGO_OPENNSL_DRIVER_MEMSET GLOBAL_MEMSET
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_MEMSET memset
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define INDIGO_OPENNSL_DRIVER_MEMCPY GLOBAL_MEMCPY
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_MEMCPY memcpy
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_STRNCPY
    #if defined(GLOBAL_STRNCPY)
        #define INDIGO_OPENNSL_DRIVER_STRNCPY GLOBAL_STRNCPY
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_STRNCPY strncpy
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_STRNCPY is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define INDIGO_OPENNSL_DRIVER_VSNPRINTF GLOBAL_VSNPRINTF
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_VSNPRINTF vsnprintf
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define INDIGO_OPENNSL_DRIVER_SNPRINTF GLOBAL_SNPRINTF
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_SNPRINTF snprintf
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef INDIGO_OPENNSL_DRIVER_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define INDIGO_OPENNSL_DRIVER_STRLEN GLOBAL_STRLEN
    #elif INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB == 1
        #define INDIGO_OPENNSL_DRIVER_STRLEN strlen
    #else
        #error The macro INDIGO_OPENNSL_DRIVER_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __INDIGO_OPENNSL_DRIVER_PORTING_H__ */
/* @} */
