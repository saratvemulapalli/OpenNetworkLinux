/*
 * Copyright 2013,2014 Big Switch Networks, Inc.
 *
 * OpenNSLDriver indigo fwd implementation.
 */

/*
 * Implementation of Indigo Forwarding API calls
 *
 * This implementation attempts to be generic across supported Broadcom
 * based systems.  It may be possible to abstract out further to a generic
 * hardware shim.
 *
 * The shim maintains a flow table indexed by flow ID.  Associated with
 * each entry is the data required to generate and maintain hardware
 * entries to provide the intended forwarding functionality.  The details
 * of what is necessary to make this happen is contained in the platform
 * specific implementation, for example, the LB9 files.  A level of
 * indirection is provided through the PLATFORM macros.
 *
 * Currently, the macros are simple substitution, but they could be
 * driverized if needed.
 *
 * This file contains only the forwarding API interfaces.
 */
#include <sal/driver.h>
#include <indigo/error.h>
#include <indigo_opennsl_driver/OpenNSLDriver.h>
#include <opennsl/error.h>
#include <opennsl/init.h>
/*-----------------------Forwarding Module Variables----------------------------*/

int fwd_init_done = 0;

ind_fwd_config_t fwd_config;
/*-----------------------Indigo Forwarding Implementations----------------------*/

indigo_error_t
indigo_fwd_forwarding_features_get(of_features_reply_t *features_reply)
{

    //FWD_INIT_CHECK; FIXME - Sarat : better way? 
	/*if (!fwd_init_done) {
        return INDIGO_ERROR_INIT;
    }*/
	
	uint32_t capabilities = 0;

	//LOG_TRACE("%s() called", __FUNCTION__);
	if (features_reply->version < OF_VERSION_1_3)
	{
    //LOG_ERROR("Unsupported OpenFlow version 0x%x.", features_reply->version);
    return INDIGO_ERROR_VERSION;
	}
	printf("%s() called", __FUNCTION__);	
	/* Number of tables supported by datapath. */
	of_features_reply_n_tables_set(features_reply, 1); //TABLE_NAME_LIST_SIZE - FIXME - Sarat 
	OF_CAPABILITIES_FLAG_FLOW_STATS_SET(capabilities, features_reply->version);
	OF_CAPABILITIES_FLAG_TABLE_STATS_SET(capabilities, features_reply->version);
	OF_CAPABILITIES_FLAG_PORT_STATS_SET(capabilities, features_reply->version);
	OF_CAPABILITIES_FLAG_QUEUE_STATS_SET(capabilities, features_reply->version);
	of_features_reply_capabilities_set(features_reply, capabilities);

	return INDIGO_ERROR_NONE;
}


/*---------------------OpenNSL Init--------------------------------------------*/

indigo_error_t
ind_fwd_init()
{
    indigo_error_t rv;

    //LOG_TRACE("%s", __FUNCTION__);
	
	//char *type = "type";
	//char *subtype = "subtype"; 
    //rv = opennsl_attach(0,type,subtype,0);
	rv = opennsl_driver_init((opennsl_init_t *) NULL);
    if (rv != 0) {
        fwd_init_done = 1;
		printf("fwd_init unsuccessfull");
		printf("\r\nFailed to initialize the system. Error %s\r\n",
        opennsl_errmsg(rv));
    }
    return rv;
}


int aim_main(int argc, char * args[])
{
	printf("Is this getting built?\n");
	ind_fwd_init();
	return 0;
}
