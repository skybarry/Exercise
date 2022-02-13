#include <stdio.h>
#define IMIN(N,M) (((N)<(M))? (N) : (M))
//#define IMIN(X,Y,Z) if(X<Y) Z=X;\
//                    else Z=Y;

int main(void)
{
    int x=100,y=50;
    printf("The lesser of %d and %d is %d.\n",
        x, y,IMIN(x,y));
    return 0;
}
