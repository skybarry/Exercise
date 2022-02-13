#include <stdio.h>
int main()
{

    union hold {
        int digit;
        char letter;
    }fit;


    printf("sizeof (fit)=%d\n",sizeof(fit));

    fit.digit = 0x12345678;
    printf("fit.digit=%#x\n",fit.digit);
    printf("fit.letter=%#x\n",fit.letter);

    fit.letter = 0xff;
    printf("fit.digit=%#x\n",fit.digit);
    getchar();
    return 0;

}
