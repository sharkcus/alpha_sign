# Code for Alpha Sign

This project is for communicating with the 4120c Alpha LED sign in the dev area.
Information about the sign can be found on the [Alpha website](https://www.alpha-american.com/p-alpha-4120c.html). The communications protocol is also there under the [manuals section](https://www.alpha-american.com/alpha-manuals/M-Protocol.pdf)


The starting code for the project was found at [https://www.teuniz.net/RS-232/](https://www.teuniz.net/RS-232/). 
This code is now in the `RS-232` folder.

## Hardware

I'm using a usb-serial device that shows up in Linux as `/dev/ttyUSB0` and a 6 conductor modular cable.
Information on the hardware connections was found at on the product [website](https://www.alpha-american.com/alpha-manuals/M-Cables-Adapters-Interfaces.pdf).

At the moment, there may be some hardware connectivity issues. The following checks ahve been performed:

1. Cable continuity: multimeter shows all 6 pins connected.

2. Cable shorts: multimeter found no shorts.

3. Voltage check -- sign: Pin 6 is +5V above pin 1, as described in docs.

4. Voltage check -- usb serial: write to RTS and read from CTS work.
   Sending serial data causes TXD pin voltage to change.

## Usage

There is no makefile yet, but the code can be run from the terminal as follows:

0. Give yourself permission to write to the serial port with `sudo chmod a+rw /dev/ttyUSB0`

1. Navigate to the `alpha_sign` directory.

2. Compile the code with `gcc hello_world.c RS-232/rs232.c alpha.c -Wall -Wextra -o2 -o hwrldgcc hello_world.c RS-232/rs232.c alpha.c -Wall -Wextra -o2 -o hwrld`

3. Run the code with `./hwrld`

## To Do

1. Get the teuniz.net demo code to work

2. Make a simple command line interface to update the sign text

3. Experiment with advanced features of protocol and decide which to use

4. Make an API interface for the sign.


