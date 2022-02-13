#include<stdio.h>
int main()
{
    int *ptr;
    int nurse = 22;
    ptr = &nurse;  /* pointer to nurse */
    int val = *ptr;

    printf("ptr=%p, addr of nurse=%p, ptr=%d", ptr,&nurse,*ptr);


    return 0;
}
