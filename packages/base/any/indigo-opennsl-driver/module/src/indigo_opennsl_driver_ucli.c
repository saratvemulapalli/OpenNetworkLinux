/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <indigo_opennsl_driver/indigo_opennsl_driver_config.h>

#if INDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_UCLI == 1

#include <uCli/ucli.h>
#include <uCli/ucli_argparse.h>
#include <uCli/ucli_handler_macros.h>

/*static ucli_status_t
indigo_opennsl_driver_ucli_ucli__config__(ucli_context_t* uc)
{
    UCLI_HANDLER_MACRO_MODULE_CONFIG(indigo_opennsl_driver)
}*/

/* <auto.ucli.handlers.start> */
/* <auto.ucli.handlers.end> */

static ucli_module_t
indigo_opennsl_driver_ucli_module__ =
    {
        "indigo_opennsl_driver_ucli",
        NULL,
        //indigo_opennsl_driver_ucli_ucli_handlers__,
        NULL,
        NULL,
    };

ucli_node_t*
indigo_opennsl_driver_ucli_node_create(void)
{
    ucli_node_t* n;
    ucli_module_init(&indigo_opennsl_driver_ucli_module__);
    n = ucli_node_create("indigo_opennsl_driver", NULL, &indigo_opennsl_driver_ucli_module__);
    ucli_node_subnode_add(n, ucli_module_log_node_create("indigo_opennsl_driver"));
    return n;
}
#else
void*
indigo_opennsl_driver_ucli_node_create(void)
{
    return NULL;
}
#endif

