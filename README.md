# Rock, Paper, Scissors battle simulator
Made for the lulz because I saw a post about this concept online and thought it would be fun to make. One could
use this simulation to illustrate a physical system with three different phases. It is interesting to see, that the system always relaxes to only one state.

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


## To compile

```bash
python -m nuitka ./Code
/main.py --standalone --windows-icon-from-exe=icon.ico --windows-force-stderr-spec=%PROGRAM%logs.txt --windo
ws-force-stdout-spec=%PROGRAM%output --enable-plugin=numpy --include-data-dir=Assets/=Assets/
```

### TODO
- [ ] Add a GUI to change the settings
- [ ] Rerun without closing the window
- [ ] Add `matplotlib` to show the population of each element over time
- [ ] Optimize collision detection, maybe with some trick from the `arcade` library