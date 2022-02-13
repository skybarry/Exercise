#include <stdio.h>
int main()
{
    float a;
    printf("input a number:");
    scanf("%f", &a);
    printf("the number you input:%f\n", a);

    //fflush(stdin);

    char ch;
    printf("input a symbol:");
    scanf("%c", &ch);
    printf("the symbol you input:%c\n", ch);


    return 0;
}

