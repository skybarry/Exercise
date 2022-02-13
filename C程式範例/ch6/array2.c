#include <stdio.h>
#define SIZE 3
void show_1d(int *ar,int size);
int main()
{ 
   int i=0;
   int a[3]={5,-2,17}; 
   show_1d(a,SIZE);
   a[1]=100;
   show_1d(&(a[0]),SIZE);
  return 0;
}
void show_1d(int *ar,int size)
{
   int i=0;
   for (;i<size;i++)   printf("ar[%d]=%-5d <--%p\n",i,ar[i],&ar[i]); 
}
