#include "defines.h"

//to initialize the ascii-screen
void ascii_init (void);

//To "move" to a place you want to write or read from
void ascii_gotoxy (unsigned char x, unsigned char y);

/* To manipulate the control-bit */
void ascii_control_bit_set (unsigned char x);

void ascii_control_bit_clear (unsigned char x);

/* These are to write charachter and commands */
void ascii_write_character (unsigned char character);

void ascii_write_command (unsigned char data);

/*To read status and data*/
unsigned char ascii_read_status (void);

unsigned char ascii_read_data (void);

/*Controller-functions*/
void ascii_write_controller (unsigned char byte);

unsigned char ascii_read_controller (void);
