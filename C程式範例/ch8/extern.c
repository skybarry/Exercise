#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    extern int x;
    printf("%d\n", x);
    return (EXIT_SUCCESS);
}
int x = 10;
