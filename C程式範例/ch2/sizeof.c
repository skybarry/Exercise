#include <stdio.h>
int main(void)
{
	int a;
	int b[10];

	printf("Type INT has a size of %u bytes. \n", sizeof(a));
	printf("Type INT has a size of %u bytes. \n", sizeof(int));
	printf("Type INT array has a size of %u bytes. \n", sizeof(b));

	printf("Type CHAR has a size of %u bytes. \n", sizeof(char));
	printf("Type LONG has a size of %u bytes. \n", sizeof(long));
	printf("Type DOUBLE has a size of %u bytes. \n", sizeof(double));

   return 0;
}
