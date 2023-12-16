# Rock, Paper, Scissors battle simulator
Made for the lulz because I saw a post about this concept online and thought it would be fun to make.

## To compile

```bash
python -m nuitka ./Code
/main.py --standalone --windows-icon-from-exe=icon.ico --windows-force-stderr-spec=%PROGRAM%logs.txt --windo
ws-force-stdout-spec=%PROGRAM%output --enable-plugin=numpy --include-data-dir=Assets/=Assets/
```
