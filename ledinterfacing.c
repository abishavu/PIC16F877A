#include <pic.h>
#define _XTAL_FREQ 2000000
 
void main()
{
  TRISC=0x00;
  while(1)
  {
     PORTC = 0xFF;
     __delay_ms(1000);
     PORTC = 0x00;
     __delay_ms(1000);
     unsigned int arr[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
     for(unsigned int i=0;i<8;i++)
     {
       PORTC =arr[i];
       __delay_ms(1000);
     } 
     PORTC = 0x00;
     __delay_ms(1000);
  }
} 
        