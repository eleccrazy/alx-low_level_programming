#!/bin/bash
wget -P /tmp/ https://github.com/eleccrazy/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libeleccrazy.so
export LD_PRELOAD=/tmp/libeleccrazy.so
