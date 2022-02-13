#include<stdio.h>
#include<stdlib.h>

void show(int x, int *a);
int main()
{
    int i,j,n;
    int count=0;

    printf("Input the size:");
    scanf("%d", &n);
    /*
    int **arr=(int **)malloc(n*sizeof(int *));  //使用動態記憶體配置一個二維陣列;
    for(i=0;i<n;i++)
        arr[i]=(int *)malloc(n*sizeof(int));
    */

    int (*arr)[n]=malloc(n*n*sizeof(int));
    printf("%d\n",sizeof(arr));
    // int arr[n][n]; //使用一般陣列宣告;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            arr[i][j]=count;
            count++;
        }
    show(n,*arr);


    free(arr);


    return 0;
}

void show(int x, int *a)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        printf("\n");
        for(j=0;j<x;j++)
            printf("a[%d][%d]=%d ",i, j, *(a+x*i+j));
    }
}



