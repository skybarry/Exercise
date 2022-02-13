
#include <stdio.h>
#include <string.h>    // for strcmp()
#define FALSE 0
#define TRUE 1
enum spectrum {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};
const char * colors[] = {"red", "orange", "yellow",
                         "green", "blue", "violet"};
#define LEN 30


int main(void)
{
    char choice[LEN];
    enum spectrum color;
    char color_is_found = FALSE;

    printf("input a color:");
    gets(choice);

    for (color = RED; color <= VIOLET; color++)
    {
        if (strcmp(choice, colors[color]) == 0)
        {
            color_is_found = TRUE;
            break;
        }
    }
    if (color_is_found ) printf("color is found\n");
        else printf("color is not found\n");
    return 0;
}
