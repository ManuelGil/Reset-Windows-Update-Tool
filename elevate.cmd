@setlocal
@echo off

set ELEVATE_CMDLINE=%*
set ELEVATE_APP=%1

start wscript //nologo "%~dpn0.vbs" %*
