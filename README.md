# micromacro
An 8 key macro keyboard


## Parts List
* 1x Sparkfun Pro Micro 5v
* 1x Breakaway Headers
* 8x Cherry Key Switches
* 8x Diodes
* 8x Keycaps
* 1x Case

Sparkfun Wishlist: <http://sfe.io/w149906](http://sfe.io/w149906>

## Assembly
1. Collect all your parts
  ![img][img_1]
  ![img][img_2]
  ![img][img_3]
2. Bend all the diodes - its easier and neater to bend them before
  ![img][img_4]
3. Populate the board with all the diodes and then solder them in place - bending the legs out a little will hold the diodes in place until you have a chance to solder them.
  ![img][img_5]
4. Solder the headers to the Pro Micro - it is easiest to just solder one or two pins to hold things together loosely.
  ![img][img_6]
5. Solder the Pro Micro to the PCB - again, one or two pins
  ![img][img_7]
6. Install Pro Micro to PCH and finish soldering all the rest of the pins
  ![img][img_8]
  ![img][img_9]
7. (optional) If using a plate, install the key switches to the plate
  ![img][img_10]
  ![img][img_11]
8. Install the switches to the PCB and solder.
  ![img][img_12]
9. Install keycaps.
  ![img][img_13]
10. Install contraption into case. (STL file in /case)
11. Flash firmware to ProMicro. (Arduino sketch in /firmware)


[img_1]: https://github.com/wadesherman/micromacro/blob/master/img/1_keycaps.JPG "Keycaps"
[img_2]: https://github.com/wadesherman/micromacro/blob/master/img/2_boards.JPG "PCB"
[img_3]: https://github.com/wadesherman/micromacro/blob/master/img/3_components.JPG "Components"
[img_4]: https://github.com/wadesherman/micromacro/blob/master/img/4_bend_diodes.JPG "Bend Diodes"
[img_5]: https://github.com/wadesherman/micromacro/blob/master/img/5_populate_diodes.JPG "Populate Diodes"
[img_6]: https://github.com/wadesherman/micromacro/blob/master/img/6_arduino_headers.JPG "Pro Micro Headers"
[img_7]: https://github.com/wadesherman/micromacro/blob/master/img/7_install_arduino.JPG "Pro Micro Headers"
[img_8]: https://github.com/wadesherman/micromacro/blob/master/img/8_solder_arduino_a.JPG "Solder"
[img_9]: https://github.com/wadesherman/micromacro/blob/master/img/9_solder_arduino_b.JPG "Solder"
[img_10]: https://github.com/wadesherman/micromacro/blob/master/img/10_key_plate_a.JPG "Key Plate"
[img_11]: https://github.com/wadesherman/micromacro/blob/master/img/11_key_plate_b.JPG "Key Plate"
[img_12]: https://github.com/wadesherman/micromacro/blob/master/img/12_solder_keys.JPG "Solder Keys"
[img_13]: https://github.com/wadesherman/micromacro/blob/master/img/13_install_keycaps.JPG "Install Keycaps"
