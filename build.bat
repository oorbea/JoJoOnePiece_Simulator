@echo off
chcp 65001

:: Eliminar archivos objeto y ejecutables existentes
del /q *.o 2>nul
del /q *.exe 2>nul

:: Compilar archivos objeto
g++ -c loadingScreen.cc
g++ -c randomizer.cc
g++ -c stand.cc
g++ -c fruit.cc
g++ -c player.cc
g++ -c powers.cc
g++ -c main.cc

:: Enlazar archivos objeto
g++ -o program.exe *.o

:: Mensaje de finalización
echo ¡Compilado con éxito!
echo Ejecutando el juego...

:: Tiempo de espera
timeout /t 3 /nobreak >nul

:: Borrar pantalla de la terminal
cls

:: Ejecutar el juego
program.exe