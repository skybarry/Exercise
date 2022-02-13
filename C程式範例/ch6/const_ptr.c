#include <stdio.h>

int main()
{
    const int a=10;
    int b=20;
    const int * const ptr=&a;
    *ptr=100;
    ptr=&b;


    return 0;
}
