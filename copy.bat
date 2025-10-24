@echo off
set /p platform="Plataforma (CodeForces/Beecrowd/Atcoder/Neps/OBI): "
set /p problem="Numero (ID) ou Codigo Problema: "


rem --- PLATAFORMAS NORMAIS ---
if not exist "C:\Competitive-Programming\%platform%" mkdir "C:\Competitive-Programming\%platform%"
copy /y exercicio.cpp "C:\Competitive-Programming\%platform%\%problem%.cpp" >nul
echo  Salvo em %platform%\%problem%.cpp
pause
