#include "mbed.h"
#include "rtos.h"
#include "MODSERIAL.h"

DigitalOut myled(LED1);


void led2_thread(void const *args) {
    while (true) {
    	myled = !myled;
        Thread::wait(1000);
    }
}


int main() {

    Thread thread(led2_thread);

    while(1) {

    }
}
