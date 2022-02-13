#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct book BOOKS;   
typedef BOOKS * pBooks;   
 
struct book {           
    char title[41];
    char author[31];
    float value;
} ;


int main()
{
    
    
 BOOKS mybook={"C Language","joseph",100.0};
 pBooks ptr=&mybook;
  printf("%s\n",ptr->title);
  printf("%s\n",ptr->author);
  printf("%6.2f\n",ptr->value);
 getchar();

 return 0;
}
