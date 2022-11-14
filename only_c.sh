#!/bin/bash

rm -rf build
cmake.exe -H. -Bbuild/Debug/x86_64 -G"Visual Studio 16 2019" -A"x64"
cmake.exe --build build/Debug/x86_64 --config Debug
