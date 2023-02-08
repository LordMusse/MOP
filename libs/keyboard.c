#include "startup.h"
#include "main.h"
#include "keyboard.h"

#define AMOUNT_OF_ROWS 4
#define AMOUNT_OF_COLUMNS 4

void ActivateRow (int row)
{
	//Activate bit 4 with offset row 0x10=[00010000]
	* ( (unsigned char *) GPIOD_ODR_HIGH) &= (0x10<<row);
}

unsigned char ReadColumn (void)
{
	//Return from Input-register and mask it for bit 0-3. 0x0F=[00001111]
	return * ( (unsigned char *) GPIOD_IDR_HIGH) & 0x0F;
}

unsigned char keyValue (unsigned char row, unsigned char column)
{
	//what the keypad represents
	unsigned char keyboard_input[4][4] = {	{1,2,3,10},
		      				{4,5,6,11},
						{7,8,9,12},
						{14,0,15,13}
						};
	//base return-value if nothing was pressed or weird stuff happens
	unsigned char base_value = 0xFF;
	//if column is 0 return 0xFF as a base-value
	if (column != 0x0)
	{
		//if bit 0 gives signal 0x1=[0001]
		if (column == 0x1)
		{
			return keyboard_input[row][0];
		}
		//or else if bit 1 gives signal 0x2=[0010]
		else if (column == 0x2)
		{
			return keyboard_input[row][1];
		}
		//or else if bit 2 gives signal 0x4=[0100]
		else if (column == 0x4)
		{
			return keyboard_input[row][2];
		}
		//or else if bit 3 bit gives signal 0x8=[1000]
		else if (column == 0x8)
		{
			return keyboard_input[row][3];
		}
	}
	//if column equalled 0 or something undefined return 0xFF
	return base_value;
}

unsigned char keyb (void)
{

	for (unsigned char row = 0; row < AMOUNT_OF_ROWS; row++) {
		ActivateRow(row);
		unsigned char column = ReadColumn();
		return keyValue(row,column);
	}
}
