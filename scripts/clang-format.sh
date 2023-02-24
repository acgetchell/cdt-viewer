#!/usr/bin/env bash

cd ..
rm -rf build/
cmake -S test -B build/test
cmake --build build/test --target fix-format