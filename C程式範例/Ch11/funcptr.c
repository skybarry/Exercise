
#include<stdio.h>

typedef double(*FUN)(int);

double pam (int);  // function prototype

int main( )
{
    double ans;

	FUN  pf ;
	pf=pam;

    ans=(*pf)(123);
    ans=pf(ans);
    printf("%6.2f",ans);
	getchar();
	return 0;
}

double pam (int x)
{
	return  x*2.0;
}
