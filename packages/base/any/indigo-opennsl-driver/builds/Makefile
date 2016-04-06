# -*- Makefile -*-
############################################################
# <bsn.cl fy=2014 v=onl>
#
#           Copyright 2014 BigSwitch Networks, Inc.
#
# Licensed under the Eclipse Public License, Version 1.0 (the
# "License"); you may not use this file except in compliance
# with the License. You may obtain a copy of the License at
#
#        http://www.eclipse.org/legal/epl-v10.html
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
# either express or implied. See the License for the specific
# language governing permissions and limitations under the
# License.
#
# </bsn.cl>
############################################################
#
#
############################################################
include $(ONL)/make/any.mk

MODULE := indigo_opennsl
include $(BUILDER)/standardinit.mk

DEPENDMODULES := AIM \
                 SocketManager OFConnectionManager OFStateManager \
                 loci indigo debug_counter BigRing uCli  timer_wheel \
                 minimatch murmur IOF OS \
                 Configuration BigList BigHash cjson indigo_opennsl

#LIBONLP_PLATFORM_DEFAULTS := ../onlp-platform-defaults/$(BUILD_DIR)/bin/libonlp-platform-defaults.so
#LIBONLP_PLATFORM := ../onlp-platform/$(BUILD_DIR)/bin/libonlp-platform.so
LIBONLP := $(shell $(ONLPM) --find-file onlp:$(ARCH) libonlp.so)

include $(BUILDER)/dependmodules.mk

ifeq ($(OPENNSL_HEADERS),)
$(error Need to define $(OPENNSL_HEADERS))
endif
ifeq ($(OPENNSL_LIB),)
$(error Need to define $(OPENNSL_LIB))
endif
#OFDPA_CLIENT_LIB := $(shell $(ONL_PKG_INSTALL) ofdpa-2.0-closed:powerpc --find-file libofdpa_rpc_client.so.1)


include $(BUILDER)/dependmodules.mk

BINARY := indigo-opennsl
$(BINARY)_LIBRARIES := $(LIBRARY_TARGETS) 
include $(BUILDER)/bin.mk

include $(BUILDER)/targets.mk

GLOBAL_CFLAGS += $(foreach mod,$(DEPENDMODULES_UPPER),-D$(mod)_CONFIG_INCLUDE_UCLI=1)

GLOBAL_CFLAGS += -DINDIGO_LINUX_LOGGING
GLOBAL_CFLAGS += -DINDIGO_LINUX_TIME
GLOBAL_CFLAGS += -DINDIGO_FAULT_ON_ASSERT
GLOBAL_CFLAGS += -DINDIGO_MEM_STDLIB

GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MODULES_INIT=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MAIN=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_PVS_SYSLOG=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_DAEMONIZE=1
GLOBAL_CFLAGS += -DFAULTD_CONFIG_INCLUDE_MAIN=1
GLOBAL_CFLAGS += -DFAULTD_CONFIG_INCLUDE_AIM_MAIN=1

GLOBAL_CFLAGS += -I$(OPENNSL_HEADERS)

GLOBAL_CFLAGS += -g

GLOBAL_CFLAGS += -DINDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING=1
BUILD_VERSION=$(shell date '+%a %b %e %Y at %H:%M:%S %Z')
GLOBAL_CFLAGS += -DBUILD_VERSION="\"Build Version $(BUILD_VERSION)\""


GLOBAL_LINK_LIBS += -lpthread -lm
GLOBAL_LINK_LIBS += $(OPENNSL_LIB)

include $(BUILDER)/targets.mk

.PHONY: deb
deb:
	$(MAKE) -C deb
