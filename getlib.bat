@echo off

set LIB_NAME=libgype.dll
set TARGET_DIR=example\addons\gype

if exist build (
    rmdir /s /q build
)

mkdir build

cmake -B build . -G "MinGW Makefiles"
make -C build -j18

if not exist %TARGET_DIR% (
    mkdir %TARGET_DIR%
)

if exist build\%LIB_NAME% (
    copy build\%LIB_NAME% %TARGET_DIR%\
)
