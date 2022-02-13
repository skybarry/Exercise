#include<stdio.h>
int main()
{
    int a;
    printf("請輸入某西元年>");
    scanf("%d", &a);

    if(a%4==0 && a%100!=0)
        printf("西元%d是閏年\n", a);
    else if(a%400==0)
        printf("西元%d是閏年\n", a);
    else
        printf("西元%d不是閏年\n", a);

    return 0;
}
