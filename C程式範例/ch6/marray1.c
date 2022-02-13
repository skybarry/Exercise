#include <stdio.h>

int main(void)
{
    int m[4][2] = { {2,4} , {6,8} , {1,3} , {5, 7} };

    printf("   m = %p,    m + 1 = %p\n",    m,   m + 1);
    printf("m[0] = %p, m[0] + 1 = %p\n", m[0], m[0] + 1);
    printf("  *m = %p,   *m + 1 = %p\n",  *m, *m + 1);
    printf("m[0][0] = %d\n", m[0][0]);
    printf("  *m[0] = %d\n", *m[0]);
    printf("    **m = %d\n", **m);
    printf("      m[2][1] = %d\n", m[2][1]);
    printf("*(*(m+2) + 1) = %d\n", *(*(m+2) + 1));

   return 0;
}
