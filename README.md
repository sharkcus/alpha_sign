# Code for Alpha Sign

This project is for communicating with the 4120c Alpha LED sign in the dev area.
Information about the sign can be found on the [Alpha website](https://www.alpha-american.com/p-alpha-4120c.html). The communications protocol is also there under the [manuals section](https://www.alpha-american.com/alpha-manuals/M-Protocol.pdf)


The starting code for the project was found at [https://www.teuniz.net/RS-232/](https://www.teuniz.net/RS-232/).

## Hardware

I'm using a usb-serial device that shows up in Linux as `/dev/ttyUSB0` and a 6 conductor modular cable.
Information on the hardware connections was found at on the product [website](https://www.alpha-american.com/alpha-manuals/M-Cables-Adapters-Interfaces.pdf).

## To Do

1. Get the teuniz.net demo code to work

2. Make a simple command line interface to update the sign text

3. Experiment with advanced features of protocol and decide which to use

4. Make an API interface for the sign.

