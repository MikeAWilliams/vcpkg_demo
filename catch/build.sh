#!/bin/bash
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
rm -rf build
mkdir build
cd build
cmake .. "-DCMAKE_TOOLCHAIN_FILE=/home/mike/source/vcpkg/scripts/buildsystems/vcpkg.cmake"
cmake --build .
./test