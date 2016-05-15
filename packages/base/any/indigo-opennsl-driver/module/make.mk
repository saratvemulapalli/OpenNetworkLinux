###############################################################################
#
# 
#
###############################################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
indigo_opennsl_driver_INCLUDES := -I $(THIS_DIR)inc
indigo_opennsl_driver_INTERNAL_INCLUDES := -I $(THIS_DIR)src
indigo_opennsl_driver_DEPENDMODULE_ENTRIES := init:indigo_opennsl_driver ucli:indigo_opennsl_driver

