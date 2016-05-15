/**************************************************************************//**
 *
 * @file
 * @brief indigo_opennsl_driver Configuration Header
 *
 * @addtogroup indigo_opennsl_driver-config
 * @{
 *
 *****************************************************************************/
#ifndef __INDIGO_OPENNSL_DRIVER_CONFIG_H__
#define __INDIGO_OPENNSL_DRIVER_CONFIG_H__

#ifdef GLOBAL_INCLUDE_CUSTOM_CONFIG
#include <global_custom_config.h>
#endif
#ifdef INDIGO_OPENNSL_DRIVER_INCLUDE_CUSTOM_CONFIG
#include <indigo_opennsl_driver_custom_config.h>
#endif

/* <auto.start.cdefs(INDIGO_OPENNSL_DRIVER_CONFIG_HEADER).header> */
#include <AIM/aim.h>
/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING
 *
 * Include or exclude logging. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING
#define INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING 1
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT
 *
 * Default enabled log options. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT
#define INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT AIM_LOG_OPTIONS_DEFAULT
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT
 *
 * Default enabled log bits. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT
#define INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT AIM_LOG_BITS_DEFAULT
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT
 *
 * Default enabled custom log bits. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT
#define INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT 0
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB
 *
 * Default all porting macros to use the C standard libraries. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB
#define INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB 1
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
 *
 * Include standard library headers for stdlib porting macros. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
#define INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB
#endif

/**
 * INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI
 *
 * Include generic uCli support. */


#ifndef INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI
#define INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI 0
#endif



/**
 * All compile time options can be queried or displayed
 */

/** Configuration settings structure. */
typedef struct indigo_opennsl_driver_config_settings_s {
    /** name */
    const char* name;
    /** value */
    const char* value;
} indigo_opennsl_driver_config_settings_t;

/** Configuration settings table. */
/** indigo_opennsl_driver_config_settings table. */
extern indigo_opennsl_driver_config_settings_t indigo_opennsl_driver_config_settings[];

/**
 * @brief Lookup a configuration setting.
 * @param setting The name of the configuration option to lookup.
 */
const char* indigo_opennsl_driver_config_lookup(const char* setting);

/**
 * @brief Show the compile-time configuration.
 * @param pvs The output stream.
 */
int indigo_opennsl_driver_config_show(struct aim_pvs_s* pvs);

/* <auto.end.cdefs(INDIGO_OPENNSL_DRIVER_CONFIG_HEADER).header> */

#include "indigo_opennsl_driver_porting.h"

#endif /* __INDIGO_OPENNSL_DRIVER_CONFIG_H__ */
/* @} */
