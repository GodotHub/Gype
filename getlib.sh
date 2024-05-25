#!/bin/bash

LIB_NAME="libgype.dll"
TARGET_DIR="example/addons/gype"

if [ -d "build" ]; then
    rm -rf build
fi

mkdir build

cmake -B build .

make -C build -j

if [ ! -d "$TARGET_DIR" ]; then
    mkdir -p "$TARGET_DIR"
fi

if [ -f "build/$LIB_NAME" ]; then
    cp "build/$LIB_NAME" "$TARGET_DIR/"
fi
