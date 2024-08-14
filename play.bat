@echo off

if exist program.exe (
    chcp 65001
    echo Ejecutando el juego...
    timeout /t 1 /nobreak >nul
    cls
    program.exe
) else (
    echo Error: Debes ejecutar el archivo build.bat primero.
)