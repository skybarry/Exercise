#include<stdio.h>

void recu(int);

int main()
{
    recu(1);
    return 0;
}

void recu(int n)
{
    printf("level %d\n", n);
    if(n < 4)
        recu(n+1);
    printf("LEVEL %d\n", n);
}
