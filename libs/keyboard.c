#include "startup.h"
#include "main.h"
#include "keyboard.h"

#define AMOUNT_OF_ROWS 4
#define AMOUNT_OF_COLUMNS 4

void ActivateRow (int row)
{
	//Activate bit 
	* ( (unsigned char *) GPIOD_ODR_HIGH) &= (0x10<<row);
}

unsigned char ReadColumn (void)
{
	//Return from Input-register and mask it for bit 1-4
	return * ( (unsigned char *) GPIOD_IDR_HIGH) & 0x0F;
}

unsigned char keyValue (unsigned char input)
{
	
}

unsigned char keyb (void)
{
	for (int row = 0; row < AMOUNT_OF_ROWS; row++) {
		ActivateRow(row);
		column = ReadColumn;
		if (column =! 0)
		{
			return keyValue(column);
		}
		return 0xFF;
	}
}
