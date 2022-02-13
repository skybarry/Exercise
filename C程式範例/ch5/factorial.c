#include <stdio.h>
int fac(int n);
int nonrecu_fac(int n);

int main(void)
{
    int result;
    int n=5;

    result=fac(n);
    //result=nonrecu_fac(n);
    printf("fac(%d)=%d\n",n,result);
    getchar();

    return 0;
}

int fac(int n)
{
    if (n==0)
        return 1;
    else
        return n*fac(n-1);
}

int nonrecu_fac(int n)
{
    int i,j=1;
    for (i=1;i<=n;i++)
        j*=i;
    return j;
}
