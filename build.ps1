#!/bin/pwsh

Push-Location src/generator/godot_js

pip install jinja2

python ./js_generator.py

Pop-Location

if (Test-Path "build") {
    Remove-Item -Recurse -Force "build"
    echo "Delete build dir ..."
}

mkdir build

cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DGENERATE_TEMPLATE_GET_NODE:STRING=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=gcc -DCMAKE_CXX_COMPILER:FILEPATH=g++ --no-warn-unused-cli -S . -B build -G "MinGW Makefiles"

cmake --build build --config Debug --target all -j 18 --
