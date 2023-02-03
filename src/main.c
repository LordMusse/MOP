#include "main.h"
#include "startup.h"

int main(void){
    unsigned char c;
    app_init();
    while(1){
        c = ((unsigned char) *(( unsigned short *) (GPIOE_START+0x10)));
        * ((unsigned char *) (GPIOD_START+0x14));
    }
}
