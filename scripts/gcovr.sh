#!/usr/bin/env bash

cd ..
rm -rf build/
cmake -Htest -B build/test -D ENABLE_TEST_COVERAGE=1
cmake --build build/test
./build/test/CDT_Tests
gcovr