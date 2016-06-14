Currently there are very cheap (less then 3 euro's) dev boards on Ebay featuring an STM32F103.
This is a decently powerfull ARM M3 microcontroller with 64K flash, 20K RAM and a nice amount of peripherals like build in USB.
To develop for these boards one can use the free eclipse based IDE from http://www.openstm32.org/

Compared to something like an Arduino or MBED developing for these boards is a bit more complex and required you to use the ST provided HAL libraries or spin your own.
In both cases it can be a bit harder to get started with these board.
This is why I made a project for the openstm32 IDE that contains the MBED libraries, the MBED RTOS and the excellent MODSERIAL library to make it easier to start developing for these boards.
Just import the project and start coding :)
