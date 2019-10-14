@echo off
@echo Clean up files
del /Q /F /S .\Binaries\Win32
@echo on
@echo off
del /Q /F /S .\Binaries\Win64
@echo on
@echo off
del /Q /F /S .\Intermediate\*
@echo on
@echo off
del /Q /F /S .\Saved\Logs\*
pause