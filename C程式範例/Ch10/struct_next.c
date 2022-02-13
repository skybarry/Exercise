#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct book BOOKS;   
typedef BOOKS * pBooks;   
 
struct book {           
    char title[41];
    char author[31];
    float value;
    struct book *next[10];
} ;

int main()
{
    
 BOOKS mybook_v2={"C Language V2","joseph",120.0,{NULL}};    
 BOOKS mybook={"C Language","joseph",100.0,{&mybook_v2,0}};
 pBooks ptr=&mybook;
 
  printf("%s\n",ptr->title);
  printf("%s\n",ptr->author);
  printf("%6.2f\n",ptr->value);
  ptr=ptr->next[0];
  printf("%s\n",ptr->title);
  printf("%s\n",ptr->author);
  printf("%6.2f\n",ptr->value);
  getchar();

 return 0;
}
