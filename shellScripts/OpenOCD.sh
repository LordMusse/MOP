#!/bin/bash
git clone git://git.code.sf.net/p/openocd/code openocd.git
cd openocd.git
./bootstrap
./configure --prefix=/usr --enable-maintainer-mode --enable-stlink 
--enable-ti-icdi
make
sudo make install