#include <stdio.h>
#include<stdlib.h>
int main()
{
    int A_array[20] ;
    int * B_array ;
    int array_no ;
    int i ;

    for(i=0;i<20;i++)
        A_array[i] = 0 ;
    printf("please input size of array B: ") ;
    scanf("%d",&array_no) ;
    B_array = (int *)malloc(array_no * sizeof(int)) ;
    if(B_array != NULL)
    {
        for(i=0;i<array_no;i++)
            B_array[i] = 0 ;
    }
    free (B_array );

    return 0;
}


