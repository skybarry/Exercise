#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t1 = time(NULL);
    struct tm *nPtr = localtime(&t1);
    char tbuf[30];

    strftime(tbuf, 30, "%x %X", nPtr);
    printf("%s\n", tbuf);
    getchar();
    return 0;
}

