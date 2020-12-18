require recipes-security/optee/optee-test.nxp.inc

PV = "3.10.0+git${SRCPV}"

DEPENDS += "optee-client-qoriq optee-os-qoriq"

TEEC_EXPORT = "${STAGING_DIR_HOST}${prefix}"

EXTRA_OEMAKE += " \
    TEEC_EXPORT=${TEEC_EXPORT} \
"

COMPATIBLE_MACHINE = "(qoriq-arm64)"
