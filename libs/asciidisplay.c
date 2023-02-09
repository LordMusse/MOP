#include "defines.h"
void ascii_init (void)
{	
	while( ( ascii_read_status & 0x80 ) == 0x80);
	delay_micro(8);
	ascii_write_command(0x38);
	delay_micro(39);
	while( ( ascii_read_status & 0x80 ) == 0x80);
	delay_micro(8);
	ascii_write_command(0xE0);
	delay_micro(39);
	while( ( ascii_read_status & 0x80 ) == 0x80);
	delay_micro(8);
	ascii_write_command(0x4);
	delay_micro(39);
}

//To "move" to a place you want to write or read from
void ascii_goto_coordinate (unsigned char row, unsigned char column)
{
	address = row -1;
	if (column == 2)
	{
		address = address + 0x40;
	}
	ascii_write_command(0x80|address);
}

/*main-functions*/
void ascii_write_character (unsigned char character)
{

	while( ( ascii_read_status & 0x80 ) == 0x80);
	delay_micro(8);
	ascii_write_data(character);
	delay_micro(45); //?
}

void ascii_write_command (unsigned char command)
{
	while( ( ascii_read_status & 0x80 ) == 0x80);
	delay_micro(8);
	ascii_write_controller(command);
	delay_milli(2);
}

/*sub-functions */

/* To manipulate the control-bit */
void ascii_control_bit_set (unsigned char bits)
{
	/*for instance if bit 4, 5 and 7 should be set to 1
	 * [xxxx xxxx] | [1011 0000] = [1x11 xxxx]*/
	GPIO_E.odr_low |= bits;
}
void ascii_control_bit_clear (unsigned char bits)
{
	/*for instance if bit 1,2 och 3 should be cleared [0000 0111]
	 * [xxxx xxxx] & ~(inverse)[0000 0111]
	 * [xxxx xxxx] & [1111 1000] = [xxxx x000] */
	GPIO_E.odr_low &= ~bits;
}

/* These are to write data */
void ascii_write_data (unsigned char data)
{
	ascii_control_bit_set(B_RS);
	ascii_control_bit_clear(B_RW);
	ascii_write_controller(data);
}

/*these are to read data*/
unsigned char ascii_read_status (void)
{
	* ((short int *) (&GPIO_E.moder + 2)) = (short int) 0x0000;
	ascii_control_bit_clear(B_RS);
	ascii_control_bit_set(B_RW);
	unsigned char status = ascii_read_controller();
	* ((short int *) (&GPIO_E.moder + 2)) = (short int) 0x5555;
	return status;
}
unsigned char ascii_read_data (void)
{
	* ((short int *) (&GPIO_E.moder + 2)) = (short int) 0x0000;
	ascii_control_bit_set(B_RS);
	delay_250ns(); //mycket mindre egentligen
	ascii_control_bit_set(B_RW);
	delay_250ns(); //mycket mindre här med
	unsigned char data = ascii_read_controller();	
	* ((short int *) (&GPIO_E.moder + 2)) = (short int) 0x5555;	
	return data;
}

unsigned char ascii_read_controller (void)
{
	ascii_control_bit_set(B_E);
	delay_250ns();
	delay_250ns(); //360ns (240?)
	unsigned char read_result = GPIO_E.idr_high;
	ascii_control_bit_clear(B_E);
	return read_result;
}

/*Controller-function*/
void ascii_write_controller (unsigned char command)
{
	/*list of commands*/
	delay_250ns(); //delay 40
	ascii_control_bit_set(B_E);
	GPIO_E.odr_high = command;
	delay_250ns(); //delay 230
	ascii_control_bit_clear(B_E);
	delay_250ns(); //delay 10
}
