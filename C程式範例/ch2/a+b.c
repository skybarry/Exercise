#include <stdio.h>
int main()
{
    int a=-1,b=-1,c;

    printf("input two numbers for a and b:\n");
    scanf("%x %d", &a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);

    return 0;
}
