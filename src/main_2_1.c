#include "defines.h"

int main(void){
    unsigned char c;
    app_init();
    while(1){
	//take input and store it in variable
	unsigned char keyboard_input = keyb();
	//output the content of the variable to the 7-segment-display
    	output_7_segment(keyboard_input);
    }
    return 0;
}
