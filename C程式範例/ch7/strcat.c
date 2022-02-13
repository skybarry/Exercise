#include <stdio.h>
#include <string.h>  /* declares the strcat() function */
#define SIZE 80
int main(void)
{
   char email[SIZE];
   char domain[] = "@ittraining.com.tw";

   puts("input your user name for e-mail account: ");
   scanf("%s",email);
   strcat(email, domain);
   puts(email);

   return 0;
}
