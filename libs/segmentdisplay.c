#include "defines.h"

unsigned char hex_to_7_segment (unsigned char hex)
{
	//values to send to the segment-display in direct correlation with index[0123456789ABCDEF]
	//(Funny thing, to display number 7 on this 7 segment display you input hex 7
	unsigned char value_array[16] = {0x3F,0x03,0x5B,0x4F,0x66,0x6E,0x7D,0x07,0x7F,0x67,0x77,0x7C,0x79,0x5E,0x79,0x71};
	//lights up top and bottom segment plus the round diode(DP)
	unsigned char error_code = 0x89;
	//check if input is good and return converted value
	if (hex >= 0 && hex <=15)
	{
		return value_array[hex];
	} else
	{
	return error_code;
	}
}

void output_7_segment (unsigned char output)
{
	//write to the low part(0-7) of the data-register on port D
	* ((unsigned long *) (GPIOD_ODR_LOW)) = hex_to_7_segment(output);
}
