#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];

    printf("size:%d\n",sizeof(a));

    for(int i = 0; i < n; i++)
        scanf("%d %d", &a[i], &b[i]);

    printf("a[]:");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nb[]:");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
