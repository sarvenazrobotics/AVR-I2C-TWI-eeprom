#include <io.h>
#include <delay.h>

void main(void)
{
while (1)
    {
    
    }
}


void twi_init(void)
{
TWBR=144;      //Formula: SCL_freq = CPU_freq / (16 + 2*TWBR)
TWCR=(1<<TWEN); //activates twi interface 
PORTC.4=1;      //enable internal pull-up SDA
PORTC.5=1;      //enable internal pull-up SCL

}

void twi_start(void)
{
char tmp;
TWCR=(1<<TWEN)|(1<<TWSTA)|(1<<TWINT);
while (!(TWCR & (1<<TWINT)));
tmp=TWSR; //read status register
tmp=0xFC;  // mask prescaler bits

    // Check for valid START conditions:
    // 0x08 = Master START transmitted
    // 0x10 = Master REPEATED START transmitted

if (tmp==0x08 | tmp==0x10);
return;

}

void twi_stop(void)
{
TWCR=(1<<TWEN)|(1<<TWSTO)|(1<<TWINT);
};