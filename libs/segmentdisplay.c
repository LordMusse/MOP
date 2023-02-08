#include "defines.h"

unsigned char hex_to_7_segment (unsigned char hex)
{
	return hex;
}

void output_7_segment (unsigned char output)
{
	//write to the low part(0-7) of the data-register on port D
	* ((unsigned long *) (GPIOD_ODR_LOW)) = hex_to_7_segment(output);
}
