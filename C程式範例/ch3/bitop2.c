#include <stdio.h>
main ()
{

    short d ;
    unsigned ud;

    d = 0xdfff;
    ud = 0xdfff;
    printf("%hx \n", d >> 1);
    printf("%hx \n", ud >> 1);
    printf("%hx \n", d << 1);
    printf("%hx \n", ud << 1);
    printf("%d\n", 9&0x3);
    getchar();
}
