/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <indigo_opennsl_driver/indigo_opennsl_driver_config.h>

#include "indigo_opennsl_driver_log.h"

static int
datatypes_init__(void)
{
#define INDIGO_OPENNSL_DRIVER_ENUMERATION_ENTRY(_enum_name, _desc)     AIM_DATATYPE_MAP_REGISTER(_enum_name, _enum_name##_map, _desc,                               AIM_LOG_INTERNAL);
#include <indigo_opennsl_driver/indigo_opennsl_driver.x>
    return 0;
}

void __indigo_opennsl_driver_module_init__(void)
{
    AIM_LOG_STRUCT_REGISTER();
    datatypes_init__();
}

