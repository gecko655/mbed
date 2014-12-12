#include "mbed.h"

DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);
DigitalOut myled4(LED4);

int main() {
    while(1) {
        myled1 = !myled1;
        wait(0.2);
        myled2 = !myled2;
        wait(0.2);
        myled3 = !myled3;
        wait(0.2);
        myled4 = !myled4;
        wait(0.2);
    }
}
