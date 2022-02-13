/* convert.c -- automatic type conversions */
#include <stdio.h>
int main(void)
{
    int mice;
    mice = 1.6 + 1.7;
    printf("%d\n", mice);
    mice = (int)1.6 + (int)1.7;
    printf("%d\n", mice);
    int a = 5/2  ; // ??
    printf("%d\n", a);
    float b = 5/2  ; // ??
    printf("%f\n", b);

    getchar();
    return 0;
}
