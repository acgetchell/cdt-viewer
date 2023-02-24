#!/usr/bin/env bash

cd ..
rm -rf build/
cmake --preset build-all
cmake --build build