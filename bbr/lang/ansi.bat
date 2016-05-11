@echo off
rem ansi.bat - convert into ANSI format
rem
rem convert CSP/eybuild language file into ANSI format
rem

echo Convert into ANSI format...

if not exist ansi mkdir ansi
for %%I in (*.c; *.h) do (
    echo %%I
    langc %%I ansi/%%I
)

pause
