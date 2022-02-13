#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int a_ct,e_ct,i_ct,o_ct,u_ct;
    a_ct=e_ct=i_ct=o_ct=u_ct=0;

while ((ch = getchar()) != STOP)
{
    switch (ch)
    {
      case 'A' :  a_ct++;
                  break;
      case 'E' :  e_ct++;
                  break;
      case 'I' :  i_ct++;
                  break;
      case 'O' :  o_ct++;
                  break;
      case 'U' :  u_ct++;
                  break;
      default :   break;
    }                                  /* end of switch  */
}
   printf("A:%d\n",a_ct);
   printf("E:%d\n",e_ct);
   printf("I:%d\n",i_ct);
   printf("O:%d\n",o_ct);
   printf("U:%d\n",u_ct);

   return 0;
}

