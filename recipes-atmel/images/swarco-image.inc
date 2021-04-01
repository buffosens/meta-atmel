SUMMARY = "Swarco image running on the scc-air-v2 hardware"

# Based on: https://github.com/swarco/swarco-linux-v3/blob/swarco-linux-v3/configs/swarco_linux_v3_scc-air-v2_sama5_defconfig

# Reciped can be found here: https://layers.openembedded.org/layerindex/branch/master/recipes/

# Done:
#
# mtd-utils => Tools for managing memory technology devices (instead of MTD)
# e2fsprogs => Ext2 Filesystem Utilities
#
# tslib => 	An abstraction layer for touchscreen panel events
# imagemagick => ImageMagick is an image conversion toolkit
# pixman => Pixman: Pixel Manipulation library
#
# setserial => Controls the configuration of serial ports
# libgpiod => C library and tools for interacting with the linux GPIO character device
#
# strace => System call tracing tool
# ethtool => Display or change ethernet card settings
# iptables => Tools for managing kernel packet filtering capabilities
# lrzsz => Tools for zmodem/xmodem/ymodem file transfer
# net-snmp => Various tools relating to the Simple Network Management Protocol
# ntp => Network Time Protocol daemon and utilities
# openssh => A suite of security-related network utilities based on the SSH protocol including the ssh client and sshd server
# openvpn => A full-featured SSL VPN solution via tun device.
# ippool => An IP address pool manager (instead of the PPPD package)
# ser2net => A serial to network proxy
# stunnel => Program for providing universal TLS/SSL tunneling service
# tinc => tinc vpn software
#
# expat => A stream-oriented XML parser library
#
# libevdev => Wrapper library for evdev devices
#
# lighttpd => Lightweight high-performance web server
#
# nano => GNU nano (Nano's ANOther editor, or Not ANOther editor) is an enhanced clone of the Pico text editor
# emacs => Emacs is the extensible, customizable, self-documenting real-time display editor
# dialog => display dialog boxes from shell scripts
#
# gdb => GNU debugger
#
# ToDo:
#   BR2_PACKAGE_SWARCO_USERMODE_TOOLS
#   BR2_PACKAGE_MOBILE_DATA_CONNECTOR
#   BR2_PACKAGE_USB_MODESWITCH=y
#   Option: BR2_PACKAGE_MTD=y
#   Option: BR2_PACKAGE_MTD_DOCFDISK=y
#   Option: BR2_PACKAGE_MTD_DOC_LOADBIOS=y
#   Option: BR2_PACKAGE_MTD_FTL_CHECK=y
#   Option: BR2_PACKAGE_MTD_FTL_FORMAT=y
#   Option: BR2_PACKAGE_MTD_MKFSUBIFS=y
#   Option: BR2_PACKAGE_MTD_NFTLDUMP=y
#   Option: BR2_PACKAGE_MTD_NFTL_FORMAT=y
#   Option: BR2_PACKAGE_MTD_SUMTOOL=y
#   Option: BR2_PACKAGE_LIGHTTPD_OPENSSL=y
#   Option: BR2_PACKAGE_LIGHTTPD_ZLIB=y
#   Option: BR2_PACKAGE_NTP_SNTP=y
#   Option: BR2_PACKAGE_NTP_NTPDATE=y
#   Option: BR2_PACKAGE_NTP_NTPQ=y
#   Option: BR2_PACKAGE_LIBGPIOD_TOOLS
#   Option: BR2_PACKAGE_GDB_SERVER=y
#   Option: BR2_PACKAGE_GDB_DEBUGGER=y

IMAGE_INSTALL = "\
    packagegroup-core-boot \
    kernel-modules \
    \
    mtd-utils \
    e2fsprogs \
    \
    tslib \
    imagemagick \
    pixman \
    \
    setserial \
    libgpiod \
    \
    strace \
    ethtool \
    iptables \
    lrzsz \
    net-snmp \
    ntp \
    openssh \
    openvpn \
    ippool \
    ser2net \
    stunnel \
    tinc \
    \
    expat \
    \
    libevdev \
    \
    lighttpd \
    \
    nano \
    emacs \
    dialog \
    \
    gdb \
    \
    ${CORE_IMAGE_EXTRA_INSTALL} \
    "

inherit core-image
