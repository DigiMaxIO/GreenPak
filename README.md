# Silego-GreenPak Arduino Library
Arduino Library to facilitate I2C communication between Arduino and Renesas GreenPAK devices. 

## Planned Developments
Roadmap & Ideas of Potential Additions

### Additional Device Compatibility to Add:
- TBD...


### Features to Add:
- Keypad Matrix
- LED Control
- LCD Display(s)
- Haptic Motors
- 7-Segment Displays
- Neopixel Control
- TBD...


### Example Projects to Add:
- I2C/1-Wire GPIO Exander [SLG4IOEXP-DMO](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-asynchronous-state-machine/slg4ioexp-dmo-greenpak-gpio-expander-demonstration-board) - [Extra Link](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-solutions/keypad-scanner)
- I2C Keypad Matrix Scanner [SLG4KPDSC-DMO](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-asynchronous-state-machine/slg4kpdsc-dmo-greenpak-keypad-scanner-demonstration-board) - [Extra Link](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-solutions/gpio-expander)
- [ERM Haptics](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-solutions/eccentric-rotating-mass-motor-control)
- [LCD Driver](https://www.renesas.com/us/en/products/programmable-mixed-signal-asic-ip-products/greenpak-programmable-mixed-signal-products/greenpak-solutions/lcd-driver)


---

#### Author(s)
This Library was not originally written me, it was written by David Riedell who worked for Silego at the time. 
I do plan to make changes and updates to this library moving forward as I continue testing with GreenPak devices.

#### Acquisition Issues for the GreenPak Lineup
These devices were originally created by Silego, then Silego was acquired by Dialog Semiconductor, and eventually Dialog was acquired by Renesas.
Since the GreenPak parts have gone through the wringer with IP transfers, I believe this means Renesas is completely unaware that many files and documentation have gone missing or forgotten in the process.
This library is mentioned in many of the revised documents that Renesas has, however, unfortunately this library is nowhere to be found.

The only place I was able to find this library still available online was hidden in [blueberrymuffin3's project repository](https://github.com/blueberrymuffin3/greenpak-arduino-encoder) (Thank You!)
