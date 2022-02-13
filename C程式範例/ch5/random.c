#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    for (int i = 1; i <= 6; i++)
        printf("%d\n", (rand()%49)+1);

    return 0;
}
