#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void dump(char * b, int size );
struct namect {

    char fname[20];
    char lname[20];
    int letters;
};
void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
int main(void)
{
    struct namect person1;
    struct namect person2;
    getinfo(&person1);
    makeinfo(&person1);
    // person2=person1;
    memcpy(&person2,&person1,sizeof(struct namect));                           //initialized person2 from person1
    showinfo(&person1);
    showinfo(&person2);

    //   dump(&person1,sizeof(struct namect));
    printf("-----------\n\n");

    //  if (person1==person2) //error
    if (!memcmp((char *)&person1,(char *)&person1,sizeof(struct namect)))
          printf("equal\n");



    system("pause");
    return 0;
}
void getinfo (struct namect * pst)
{
    printf("Please enter your first name.\n");
    gets(pst->fname);
    printf("Please enter your last name.\n");
    gets(pst->lname);
}

void makeinfo (struct namect * pst)
{
    pst->letters = strlen(pst->fname) +
                   strlen(pst->lname);
}

void showinfo (const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n",
       pst->fname, pst->lname, pst->letters);
}

void dump(char * b, int size )
{
    int i;
    for(i=0;i<size;i++) {
        printf("%#hhx  ",b[i]);
        if (i%10==0)
            printf("\n");
    }
}
