#!/bin/bash
# for the host
sudo apt install gcc make binutils
#for the target
#the hf in the end of gcc-arm stands for
#hardwarefloat ONLY FOR BOARDS WITH HF
# linux is for host
sudo apt install gcc-arm-linux-gnueabihf binutils-arm-linux-gnueabihf gcc-arm-linux-gnueabi binutils-arm-linux-gnueabi

#GDB
sudo apt install gdb-multiarch
echo "Done"