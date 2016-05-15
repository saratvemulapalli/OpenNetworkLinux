/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <indigo_opennsl_driver/indigo_opennsl_driver_config.h>

/* <auto.start.cdefs(INDIGO_OPENNSL_DRIVER_CONFIG_HEADER).source> */
#define __indigo_opennsl_driver_config_STRINGIFY_NAME(_x) #_x
#define __indigo_opennsl_driver_config_STRINGIFY_VALUE(_x) __indigo_opennsl_driver_config_STRINGIFY_NAME(_x)
indigo_opennsl_driver_config_settings_t indigo_opennsl_driver_config_settings[] =
{
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_LOG_OPTIONS_DEFAULT(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_LOG_BITS_DEFAULT(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_LOG_CUSTOM_BITS_DEFAULT(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_STDLIB(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
#ifdef INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI
    { __indigo_opennsl_driver_config_STRINGIFY_NAME(INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI), __indigo_opennsl_driver_config_STRINGIFY_VALUE(INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI) },
#else
{ INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI(__indigo_opennsl_driver_config_STRINGIFY_NAME), "__undefined__" },
#endif
    { NULL, NULL }
};
#undef __indigo_opennsl_driver_config_STRINGIFY_VALUE
#undef __indigo_opennsl_driver_config_STRINGIFY_NAME

const char*
indigo_opennsl_driver_config_lookup(const char* setting)
{
    int i;
    for(i = 0; indigo_opennsl_driver_config_settings[i].name; i++) {
        if(strcmp(indigo_opennsl_driver_config_settings[i].name, setting)) {
            return indigo_opennsl_driver_config_settings[i].value;
        }
    }
    return NULL;
}

int
indigo_opennsl_driver_config_show(struct aim_pvs_s* pvs)
{
    int i;
    for(i = 0; indigo_opennsl_driver_config_settings[i].name; i++) {
        aim_printf(pvs, "%s = %s\n", indigo_opennsl_driver_config_settings[i].name, indigo_opennsl_driver_config_settings[i].value);
    }
    return i;
}

/* <auto.end.cdefs(INDIGO_OPENNSL_DRIVER_CONFIG_HEADER).source> */

