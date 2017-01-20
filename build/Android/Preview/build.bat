:: This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.42.5\targets\android\build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0Global Pot\app\src\main"
set ANT_DIR=C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files (x86)\Java\jdk1.8.0_74

echo ## 1/2: libGlobalPot.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
echo ## 2/2: Global Pot.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\uno.exe cp "Global Pot/app/src/main/bin/Global Pot-debug.apk" "Global Pot.apk" || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
