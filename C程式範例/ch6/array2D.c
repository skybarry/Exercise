#include <stdio.h>
#define ROW 3
#define COL 2
 int main()
{
   int i,j;
  int m[ROW][COL]=  {{100,200},
                    {300,400},
                    {500,600}
                    };
   m[1][1]=900;
   for (i=0;i<ROW;j=0,i++)
       for (j=0;j<COL;j++)
           printf("m[%d][%d]=%-5d <--%p\n",i,j,m[i][j],&m[i][j]);

return 0;
}
