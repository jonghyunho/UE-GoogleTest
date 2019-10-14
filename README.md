# UE-GoogleTest
Integration of GoogleTest with Unreal Engine 4

Tested with Unreal Engine 4 and google test 1.8.1

## Troubleshoot

### Link Error

If link error is found while building the project,

  1>LINK : fatal error LNK1181: cannot open input file 'GoogleTestApp-Core.lib'

It's required to re-install Windows SDK 8.1 without Visual Studio Installer.

https://developer.microsoft.com/en-us/windows/downloads/sdk-archive

