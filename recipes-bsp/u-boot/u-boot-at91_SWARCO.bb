require u-boot-atmel.inc
require u-boot-envs-atmel.inc
# Added VoWe
require recipes-bsp/u-boot/u-boot-mender.inc

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://README;beginline=1;endline=22;md5=9915e8cb100eb5dbb366010a0f10296c"

SRC_URI = "git://github.com/buffosens/u-boot-at91.git;protocol=https"
#SRC_URI = "git://github.com/buffosens/u-boot-at91.git;protocol=https;branch=${UBRANCH}"

PV = "V1.11_SWARCO+git${SRCPV}"
SRCREV = "9dd05703e7eb88a8677ab46baa00a74e9bd4e134"

DEPENDS += "bison-native flex-native"

COMPATIBLE_MACHINE = 'scc_air_v2'

UBRANCH = "u-boot-2020.01-at91"

S = "${WORKDIR}/git"

PACKAGE_ARCH = "${MACHINE_ARCH}"
