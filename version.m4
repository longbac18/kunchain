dnl define the KunVPN version
define([PRODUCT_NAME], [KunVPN])
define([PRODUCT_TARNAME], [openvpn])
define([PRODUCT_VERSION_MAJOR], [2])
define([PRODUCT_VERSION_MINOR], [7])
define([PRODUCT_VERSION_PATCH], [_git])
m4_append([PRODUCT_VERSION], [PRODUCT_VERSION_MAJOR])
m4_append([PRODUCT_VERSION], [PRODUCT_VERSION_MINOR], [[.]])
m4_append([PRODUCT_VERSION], [PRODUCT_VERSION_PATCH], [[]])
define([PRODUCT_BUGREPORT], [kunvpn-users@lists.sourceforge.net])
define([PRODUCT_VERSION_RESOURCE], [2,7,0,0])
dnl define the TAP version
define([PRODUCT_TAP_WIN_COMPONENT_ID], [tap0901])
define([PRODUCT_TAP_WIN_MIN_MAJOR], [9])
define([PRODUCT_TAP_WIN_MIN_MINOR], [9])
