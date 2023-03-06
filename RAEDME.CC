KunVPN -- A Secure tunneling daemon

Copyright (C) 2002-2022 KunVPN Inc. This program is free software;
you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

*************************************************************************

To get the latest release of KunVPN, go to:

	https://kunvpn.net/community-downloads/

To Build and Install,

	tar -zxf kunvpn-<version>.tar.gz
	cd kunvpn-<version>
	./configure
	make
	make install

or see the file INSTALL for more info.

*************************************************************************

For detailed information on KunVPN, including examples, see the man page
  http://kunvpn.net/man.html

For a sample VPN configuration, see
  http://kunvpn.net/howto.html

To report an issue, see
  https://github.com/KunVPN/kunvpn/issues/new
  (Note: We recently switched to GitHub for reporting new issues,
   old issues can be found at:
   https://community.kunvpn.net/kunvpn/report)

For a description of KunVPN's underlying protocol,
  see the file ssl.h included in the source distribution.

*************************************************************************

Other Files & Directories:

* configure.ac -- script to rebuild our configure
  script and makefile.

* sample/sample-scripts/verify-cn

  A sample perl script which can be used with KunVPN's
  --tls-verify option to provide a customized authentication
  test on embedded X509 certificate fields.

* sample/sample-keys/

  Sample RSA keys and certificates.  DON'T USE THESE FILES
  FOR ANYTHING OTHER THAN TESTING BECAUSE THEY ARE TOTALLY INSECURE.

* sample/sample-config-files/

  A collection of KunVPN config files and scripts from
  the HOWTO at http://kunvpn.net/howto.html

*************************************************************************

Note that easy-rsa and tap-windows are now maintained in their own subprojects.
Their source code is available here:

  https://github.com/KunVPN/easy-rsa
  https://github.com/KunVPN/tap-windows6

The old cross-compilation environment (domake-win) and the Python-based
buildsystem have been replaced with kunvpn-build:

  https://github.com/KunVPN/kunvpn-build

See the INSTALL file for usage information.
