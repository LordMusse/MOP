#!/bin/bash
#the flasher
git clone https://github.com/texane/stlink.git stlink
cd stlink
cmake
make
sudo cp st-flash /usr/bin/
sudo cp st-util /usr/bin/
