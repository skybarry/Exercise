#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d",&n))
        while (n!=99)
        {
            printf("%d is not the answer.\n", n);
            scanf("%d",&n);
        }

    printf("The loop has finished.\n");

    return 0;
}
