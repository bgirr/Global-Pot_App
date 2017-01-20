:: This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.42.5\targets\android\run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\uno.exe open -a"Android Studio" "%~dp0Global Pot"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.globalpot
    C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\uno.exe adb uninstall com.apps.globalpot
    exit /b %ERRORLEVEL%
)

C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\uno.exe launch-apk "%~dp0Global Pot.apk" ^
    --package=com.apps.globalpot ^
    --activity=GlobalPot ^
    --sym-dir="%~dp0Global Pot\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
