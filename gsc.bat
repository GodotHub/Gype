@echo off
REM Check if any arguments are passed
if "%*" == "" (
    echo No arguments provided.
    exit /b 1
)

REM Construct the command with all passed arguments
set CMD=script\gype\qjs script\gype\tsc.js

:loop
if "%1"=="" goto endloop
    set CMD=%CMD% %1
    shift
goto loop
:endloop

REM Execute the constructed command
%CMD%
