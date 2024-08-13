@echo off
chcp 65001

:: Eliminar archivos objeto y ejecutables existentes
del /q *.o
del /q *.exe

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