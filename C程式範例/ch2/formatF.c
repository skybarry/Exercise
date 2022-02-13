#include<stdio.h>
#include<math.h>
int main(void)
{
    float pi = acos(-1);
    printf("[%f]\n", pi);

    printf("[%6.2f]\n", pi);

    float a=123.456789;
    printf("[%e]\n", a);

    return 0;
}
