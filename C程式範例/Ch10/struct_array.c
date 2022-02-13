#include <stdio.h>
#include "guy.h"
void show_guy(struct guy *, int size);
void show_guy_v2(struct guy * p);
int main() {


  struct guy fellow[] = {
        {{ "Chip", "Vejer"} ,
         "nachos plate",
         "memory broker",
         36827.00
        },
        {{"Rodney", "Swillbelly"} ,
         "salmon mousse",
         "tabloid editor",
         148500.00
        },
        {{0},0}
    };

  show_guy(fellow,2);
  show_guy_v2(fellow);
  getchar();

 return 0;
}


void show_guy(struct guy * p, int size)
{
  int i;
  for (i=0;i<size;i++)
      printf("%s %s: %s, %s %f \n", p[i].handle.first,p[i].handle.last,
                p[i].favfood, p[i].job,p[i].income);

}


void show_guy_v2(struct guy * p)
{
   int i=0;
  for (;p!=NULL && p->handle.first[0]!=0;i++,p++)
      printf("%d:%f\n",i,p->income);
}



