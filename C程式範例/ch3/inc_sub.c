#include <stdio.h>
void main( ) {
    int i = 5, j = 5;
    printf("i: %d, j: %d\n", i++, ++j);
    printf("i: %d, j: %d\n", i, j);
    i = 5, j = 5;
    printf("i: %d, j: %d\n", i--, --j);
    printf("i: %d, j: %d\n", i, j);

    getchar();
}
