#include <pic.h>
#define _XTAL_FREQ 2000000

void main()
{
TRISC = 0x00;
while(1)
{
 unsigned int arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
 for(unsigned int i=0;i<10;i++)
 {
  PORTC = arr[i];
  __delay_ms(500);
 }
}
}