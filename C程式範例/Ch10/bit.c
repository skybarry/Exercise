#include <stdio.h>
int main()
{
    struct {
           unsigned int code1 : 2;
           unsigned int code2 : 3;
           unsigned int code3 : 8;
    } prcode={0};


    prcode.code1 = 0;
    prcode.code2 = 3;

    printf("sizeof(prcode)=%d\n",sizeof(prcode));
    printf("prcode.code2=%d\n",prcode.code2);
    printf("prcode.code3=%d\n",prcode.code3);

    getchar();
    return 0;
}
