###############################################################################
#
# indigo_opennsl_driver Unit Test Makefile.
#
###############################################################################
UMODULE := indigo_opennsl_driver
UMODULE_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/utest.mk
