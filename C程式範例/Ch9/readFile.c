#include <stdio.h>
#define MAXLINE 81

#include <stdlib.h> // ANSI C exit() prototype
int main(int argc, char *argv[])
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file pointer"
    char line[MAXLINE];
    long count = 0;

    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }
      // fgets will return NULL when it reads EOF
    while ((fgets(line, MAXLINE, fp)!= NULL ))
    {
       fputs(line,stdout) ;

    }
    fclose(fp);

    return 0;
}
