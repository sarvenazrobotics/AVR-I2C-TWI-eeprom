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

}