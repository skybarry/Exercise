#include <stdio.h>

int gcd(int a, int b);
int non_gcd(int a, int b);
int main()
{
   int n1, n2;
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);

   printf("GCD of %d and %d is %d.\n", n1, n2, gcd(n1,n2));

   return 0;
}


int non_gcd(int a, int b)
{
    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

/*
 gcd(a,b)=
   a               if b=0
   gcd(b,a mod b) , otherwise

*/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
       return gcd(b, a%b);
}


