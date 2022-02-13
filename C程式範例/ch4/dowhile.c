#include <stdio.h>
int main(void)
{
    char ch;
    int chcount = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            break;
        printf("[%c]\n", ch);
        chcount++;
    }
    printf("%d\n", chcount);


    chcount = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            printf("Pass\n");
            continue;
        }

        printf("[%c]\n", ch);
        chcount++;
    }
    printf("%d\n", chcount);


   return 0;
}
