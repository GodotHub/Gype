#!/bin/pwsh

if ($args.Count -eq 0) {
    Write-Host "Error: no args found"
    exit 1
}

$CMD = "script\gype\qjs script\gype\tsc.js"

foreach ($arg in $args) {
    $CMD += " $arg"
}

Invoke-Expression $CMD
