@echo off
cd /d C:\Competitive-Programming

echo.
echo ========= GIT PUSH =========

git add .
git commit -m "Atualizacao automatica de exercicios"
git push origin main

echo.
echo ✅ Enviado para o GitHub com sucesso!
pause
