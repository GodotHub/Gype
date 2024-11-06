#!/bin/pwsh

Push-Location src/generator/godot_js

$pip = if ($IsLinux) { "pip3" } else { "pip" }
$python = if ($IsLinux) { "python3" } else { "python" }

function check_python {

    if (-not (Get-Command $python -ErrorAction SilentlyContinue)) {
        echo "Python is not installed."
        exit 1
    }

    if (-not (Get-Command $pip -ErrorAction SilentlyContinue)) {
        echo "Pip is not installed."
        exit 1
    }

    try {
        & $pip show jinja2 > $null
        if ($LASTEXITCODE -ne 0) {
            & $pip install jinja2
        }
    }
    catch {
        echo "Failed to install jinja2."
        exit 1
    }
    
}

if ($args.Count -eq 0 -or $args[0] -eq "all") {

    check_python
    & $python ./js_generator.py "12345"
}
elseif ($args[0] -eq "none") {
    echo "Skip generation ..."
} else {
    check_python
    & $python ./js_generator.py $args[0]
}

Pop-Location

if (Test-Path "build") {
    Remove-Item -Recurse -Force "build"
    echo "Delete build directory ..."
}

mkdir build

cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DGENERATE_TEMPLATE_GET_NODE:STRING=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=gcc -DCMAKE_CXX_COMPILER:FILEPATH=g++ --no-warn-unused-cli -S . -B build -G "MinGW Makefiles"

cmake --build build --config Debug --target all -j
