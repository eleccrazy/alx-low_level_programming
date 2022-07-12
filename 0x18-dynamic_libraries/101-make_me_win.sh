#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/eleccrazy/alx-low_level_programming/master/0x18-dynamic_libraries/libelec.so
export LD_PRELOAD=/tmp/libelec.so
