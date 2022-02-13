#include<stdio.h>
int main()
{
    int i=0;
    int n=3;
    char name[100];
    float price;
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s", name);
        scanf("%f", &price);
        while(getchar()!='\n');

        printf("==> %s %4.2f\n", name, price);
    }

    return 0;
}
