#include<stdio.h>
int main(void)
{
    char a='\x41';
    char b='\133';
    printf("\x5b%c %c\x5d",a,b);

}
