#include <stdio.h>

int main(void)
{
    int n = 5;
    while (++n< 7)
        printf("n = %d\n", n);

    printf("The loop has finished. n=%d\n",n);

    return 0;
}
