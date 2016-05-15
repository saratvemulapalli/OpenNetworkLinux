###############################################################################
#
# 
#
###############################################################################

LIBRARY := indigo_opennsl_driver
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk
