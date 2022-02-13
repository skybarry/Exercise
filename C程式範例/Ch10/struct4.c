#include <stdio.h>
#include <ctype.h>
#include "guy.h"

int main() {
  int i;
struct guy fellow[2] = {
        {{"Chip", "Vejer"} ,
         "nachos plate",
         "memory broker",
         36827.00
        }, 
        {{"Rodney", "Swillbelly"} ,
         "salmon mousse",
         "tabloid editor",
         148500.00
        }
    };

   
    
  for (i=0;i<2;i++) {
      printf("%s %s: %s, %s %f \n", fellow[i].handle.first,fellow[i].handle.last,
                                            fellow[i].favfood, fellow[i].job,fellow[i].income); 
                                            
  }                                          
      
  getchar();      
 return 0;
}
