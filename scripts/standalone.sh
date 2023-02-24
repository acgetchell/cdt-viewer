#!/usr/bin/env bash

cd ..
rm -rf build/
cmake -S all -B build -D USE_CCACHE=ON
cmake --build build
./build/standalone/cdt