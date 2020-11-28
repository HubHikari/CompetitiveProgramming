g++ -o out %1 -static

if not %ERRORLEVEL% equ 0 (
    echo ERROR: Failed to Build
	exit /b 1
) else (
    echo Build is Succeeded!
	echo ---Please Input---
	out.exe
)

