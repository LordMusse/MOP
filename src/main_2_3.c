#include "defines.h"

int main(void){    
	unsigned char *string;
	unsigned char test1[] = "Alfanumerisk ";
	unsigned char test2[] = "Display";

	app_init();
	ascii_init();
	
	ascii_gotoxy(1,1);
	string = test1;
	while ( *string )
		ascii_write_character( *string++ );
	
	ascii_gotoxy(1,2);
	string = test2;
	while ( *string )
		ascii_write_character( *string++ );
	
	return 0;
}
