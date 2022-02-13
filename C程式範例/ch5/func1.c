#include <stdio.h>
int imin(int n, int m);  // declaration

int main(void)
{
    int x=50,y=100;
    printf("The lesser of %d and %d is %d.\n", x, y, imin(x,y));

    return 0;
}
int imin(int x,int y)	// definition
{
    return ((x<y)? x : y);
}
