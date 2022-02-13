#include <stdio.h>
#include <time.h>
int main()
{
    time_t t = time(NULL);
    char* tn = ctime(&t);
    printf("Current Time:%s\n", tn);
    getchar();
    return 0;
}
