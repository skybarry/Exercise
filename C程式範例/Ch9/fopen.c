#include <stdio.h>
#include <stdlib.h> // ANSI C exit() prototype
int main(int argc, char *argv[])
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file handle"
    long count = 0;
    #if 1
    if ((fp = fopen("news.txt","r")) == NULL)

    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }

    #else
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[1],"r")) == NULL)

    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }
    #endif
    while ((ch = fgetc(fp)) != EOF)
    {
       fputc(ch,stdout);  // same as putchar(ch);
       count++;
    }
    fclose(fp);
    printf("\n\n******File %s has %ld characters********\n", argv[1], count);
    getchar();
    return 0;
}
