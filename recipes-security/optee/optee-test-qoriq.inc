# Copyright 2020-2023 NXP
require recipes-security/optee/optee-test.inc

DEPENDS:remove="optee-client optee-os-tadevkit"
DEPENDS:append="optee-client-qoriq optee-os-qoriq-tadevkit"

SRC_URI:remove = "git://github.com/OP-TEE/optee_test.git;branch=master;protocol=https"
SRC_URI:remove = "file://run-ptest"
SRC_URI:prepend = "${OPTEE_TEST_SRC};branch=${OPTEE_TEST_BRANCH} "

OPTEE_TEST_SRC ?= "git://github.com/nxp-qoriq/optee_test.git;protocol=https"
SRCREV = "c2c9f922044d2c8a7ab384812bb124c6da2b7888"

COMPATIBLE_MACHINE = "(qoriq-arm64)"
