#include <pic.h>

void delay() 
{
    unsigned int i;
    for (i = 0; i < 20000; i++);
}

void main() {
    TRISB = 0xFE;  
    while(1) {
        PORTB = 0x01; 
        delay();
        PORTB = 0x00; 
        delay();
    }
}
