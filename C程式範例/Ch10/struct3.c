#include <stdio.h>
#include<stdlib.h>
#define LEN 31

struct names {
    char first[LEN];
    char mid[LEN];
    char last[LEN];
    int value;
} ;

struct guy {
    struct names handle;           // nested structure
    char favfood[LEN];
    char job[LEN];
    float income;
} ;



int main() {

    struct names item;

    item.value=12;
    struct guy fellow = {    // initialize a variable
            {  "Chip","ROGER", "Vejer" } ,
            "nachos plate",
            "memory broker",
             36827.00  } ;
    struct guy * ptr;
    ptr=&fellow;


    //printf("%s \n",fellow.handle.first);
    printf("Dear %s, \n\n", fellow.handle.mid);
    printf("Dear %s, \n\n", ptr->handle.mid);
    printf("Dear %s, \n\n", (*ptr).handle.mid);
    // printf("%s \n",fellow.handle.last);
    system("pause");
    return 0;
}
