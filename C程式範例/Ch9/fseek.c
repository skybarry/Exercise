
#include <stdio.h>
#include <stdlib.h> // ANSI C exit() prototype
int main(int argc, char *argv[])
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file handle"
    long count = 0;
	long end_pos;
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[1],"r+")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    } 
  
      fseek(fp,0L,SEEK_END);
      end_pos=ftell(fp);
      printf("end_post=%ld\n",end_pos);
   
   for( count=1;count<=end_pos ;count++)
    {//  printf("%ld\n",count); 
       fseek(fp,-count,SEEK_END);
       ch = getc(fp);
       putc(ch,stdout);  // same as putchar(ch);
     }
     
    fclose(fp);
    return 0; 


}
