# CNC PANEL

### Panel for controlling CNC via Candle Qt. </br></br>

Panel is powered by arduino. Arduino is reading serial data from 74LS166 while IC is getting it's data parallel from rotary switches. </br>
Buttons are multiplexed and read by arduino. </br>
When arduino gets data it sends message to Candle via serial port where it is being processed and commands are started accordingly. </br>

---

USES FOR SWITCHES AND BUTTONS: </br>
* Buttons: jog - plus and minus for X, Y and Z axis
* Rotary sw: jog step
* Rotary sw: feed rate
* Mushroom: stop