#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct  pnames {
    char *fname;
    char *lname;
    int letters;
};
void getinfo(struct pnames *);
void makeinfo(struct pnames *);
void showinfo(const struct pnames *);
int main(void)
{

    struct pnames person1;
   
    getinfo(&person1);
    makeinfo(&person1);
	showinfo(&person1);

	
	free(person1.fname);
	free(person1.lname);
	getchar();
    system("pause");
    return 0;
}

void getinfo (struct pnames * pst)
{
    char temp[81];
    printf("Please enter your first name.\n");
    gets(temp);
    // allocate memory to hold name
    pst->fname = (char *) malloc(strlen(temp) + 1);
    // copy name to allocated memory
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    gets(temp);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}
/*
void makeinfo (struct pnames * pst)
{
    pst->letters = strlen(pst->fname) +
                   strlen(pst->lname);
}
*/

void makeinfo (struct pnames * pst)
{
    pst->letters=strlen(pst->fname)+strlen(pst->lname);
}    
     
void showinfo(const struct pnames *pst)
{
     printf("%s %s,your name contains %d letter.\n",
       pst->fname,pst->lname,pst->letters);
}       


/*

void showinfo (const struct pnames * pst)
{
    printf("%s %s, your name contains %d letters.\n",
       pst->fname, pst->lname, pst->letters);
}
*/
