#include "defines.h"

void delay_250ns( void )
{
	/* SystemCoreClock = 168000000 */
	*STK_CTRL = 0;
	*STK_LOAD = ( (168/4) -1 );
	*STK_VAL = 0;
	*STK_CTRL = 5;
	while( (*STK_CTRL & 0x10000 )== 0 );
	*STK_CTRL = 0;
}
void delay_micro(unsigned int us)
{
#ifdef SIMULATOR
	us = us / 1000;
	us++;
#endif
	while( us > 0 )
	{
		delay_250ns();
		delay_250ns();
		delay_250ns();
		delay_250ns();
		us--;
	}
}
