@echo off
set /p platform="Plataforma (CodeForces/Beecrowd/Atcoder/Neps): "
set /p problem="Numero (ID) ou nome do problema: "

if not exist "%platform%" mkdir "%platform%"

copy /y exercicio.cpp "%platform%\%problem%.cpp" >nul

echo Salvo em %platform%\%problem%.cpp
pause
