include $(ONL)/make/any.mk

MODULE := indigo_opennsl_driver
include $(BUILDER)/standardinit.mk

MODULE_DIRS=$(ONL)/sm/indigo/modules
#MODULE_DIRS+=$(ONL)/sm/loxigen-artifacts/modules

DEPENDMODULES := AIM loci SocketManager OFConnectionManager OFStateManager \
	indigo debug_counter BigRing uCli  timer_wheel \
	minimatch murmur IOF OS \
	Configuration BigList BigHash cjson indigo_opennsl_driver \
	histogram slot_allocator

include $(BUILDER)/dependmodules.mk

LIBONLP := $(shell $(ONLPM) --find-file onlp:$(ARCH) libonlp.so)

OPENNSL_HEADERS=FIXME
OPENNSL_LIB=FIXME

ifeq ($(OPENNSL_HEADERS),)
$(error Need to define $(OPENNSL_HEADERS))
endif
ifeq ($(OPENNSL_LIB),)
$(error Need to define $(OPENNSL_LIB))
endif


BINARY := indigo-opennsl
$(BINARY)_LIBRARIES := $(LIBRARY_TARGETS)
include $(BUILDER)/bin.mk

include $(BUILDER)/targets.mk

GLOBAL_CFLAGS += $(foreach mod,$(DEPENDMODULES_UPPER),-D$(mod)_CONFIG_INCLUDE_UCLI=1) 

GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MODULES_INIT=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_MAIN=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_PVS_SYSLOG=1
GLOBAL_CFLAGS += -DAIM_CONFIG_INCLUDE_DAEMONIZE=1
GLOBAL_CFLAGS += -DAIM_CONFIG_AIM_MAIN_FUNCTION=snmp_subagent_main
GLOBAL_CFLAGS += -DSNMP_SUBAGENT_CONFIG_INCLUDE_MAIN=1
GLOBAL_CFLAGS += -DSNMP_SUBAGENT_CONFIG_AGENT_NAME=\"onlp-snmpd\"
GLOBAL_CFLAGS += -DSNMP_SUBAGENT_CONFIG_AGENT_DESCRIPTION="\"ONLP SNMP Agent\""
GLOBAL_CFLAGS += -g

LIBONLP := $(shell $(ONLPM) --find-file onlp:$(ARCH) libonlp.so)

GLOBAL_LINK_LIBS += -lpthread $(LIBONLP)
GLOBAL_LINK_LIBS += -Wl,--unresolved-symbols=ignore-in-shared-libs

GLOBAL_CFLAGS += -DINDIGO_OPENNSL_DRIVER_CONFIG_INCLUDE_LOGGING=1
BUILD_VERSION=$(shell date '+%a %b %e %Y at %H:%M:%S %Z')
GLOBAL_CFLAGS += -DBUILD_VERSION="\"Build Version $(BUILD_VERSION)\""


GLOBAL_LINK_LIBS += -lpthread -lm
GLOBAL_LINK_LIBS += $(OPENNSL_LIB)
