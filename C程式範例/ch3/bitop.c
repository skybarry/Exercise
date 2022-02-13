#include <stdio.h>
int main ()
{
    unsigned short a, b;
    unsigned short d;
    unsigned short e;
    a = 0xaa;
    b = 0xa1;
    printf ("a=%hx,b=%hx \n", a,b);
    printf ("a&b=%hx\n", a & b);
    printf ("a|b=%hx\n", a | b);
    printf ("a^b=%hx\n", a ^ b);
    printf ("~a=%hx\n", ~a);
    d = 0x8fff;
    printf ("d : %hx \n", d );
    printf ("d << 1: %hx \n", d << 1);
    printf ("d >> 1: %hx \n", d >> 1);
    e = 1;
    printf("e=%hx\n",e);
    printf("~e=%hx\n",~e);}
