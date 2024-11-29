# Rock, Paper, Scissors "Battle Simulation"
Made for the lulz because I saw a post about this concept online and thought it would be fun to make. One could
use this simulation to illustrate a physical system with three different phases. It is interesting to see, that the system always relaxes to only one state.

## Run from precompiled binary
The binaries I compiled are quite wonky, but you can try to run them. The `Builds/main.exe` file is the one you want to run.

## Run from Code
Install the required Python packages with:
```bash
pip install -r requirements.txt
```
Then run the `main.py` file with:
```bash
python ./Code/main.py
```
Parameters of the simulation can be changed in the `Code/settings.py` file. These include the number of each 
element, their sprite size (and thus collision radius), screen dimensions and a scaling factor for the random 
velocity of the elements. 


## Compile from source
You can compile the code to a standalone executable with `nuitka`. The command I used to compile the code on 
Windows is:

```bash
python -m nuitka ./Code
/main.py --standalone --windows-icon-from-exe=icon.ico --windows-force-stderr-spec=%PROGRAM%logs.txt --windo
ws-force-stdout-spec=%PROGRAM%output --enable-plugin=numpy --include-data-dir=Assets/=Assets/
```

This takes quite some time and does not always work. I will try to mitigate this in the future, time allowing.

### TODO
- [ ] Add a GUI to change the settings
- [ ] Rerun without closing the window
- [ ] Add `matplotlib` to show the population of each element over time
- [ ] Optimize collision detection, maybe with some trick from the `arcade` library