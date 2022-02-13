
#include <stdio.h>
#define SIZE 3
void show_1d(int *start, int *end);
void set_ptr(int **p,int *ar);
void set_ptr2(int *p,int *ar);
int main()
{

    int a[3]={2,4,8};
    int b[3]={3,6,9};
    int *ptr=a;

    set_ptr2(ptr,b);
    show_1d(ptr,ptr+SIZE);

    set_ptr(&ptr,b);
    show_1d(ptr,ptr+SIZE);



    getchar();
    return 0;
}

void set_ptr2(int *p,int *ar)
{
    p=ar;
}

void set_ptr(int **p,int *ar)
{
    *p=ar;
}


void show_1d(int *start, int *end)
{  int i = 0 ;
   for (;start<end;start++,i++)
      printf("start[%d]=%-5d <-- %p\n",i,*start,start);
}


