#include <stdio.h>
struct book {
    char title[41];
    char author[31];
    float value;
};     /* end of structure template           */
int main(void)
{

    struct book *ptr;
    struct book libry = {
    "The Pirate and the Damsel",
    "Renee Vivotte",
    1.95
    } ;

    struct book gift = {    .value = 25.99,
                            .author = "James Broadfool",
                            .title = "Rue for the Toad"
                        };


    ptr=&gift;
    printf("%s: \"%s\" ($%.2f)\n", (*ptr).author,
          ptr->title, ptr->value);


    ptr=&libry;
    printf("%s: \"%s\" ($%.2f)\n", ptr->author,
          ptr->title, ptr->value);

    printf("%s: \"%s\" ($%.2f)\n", libry.author,
          libry.title, libry.value);
    getchar();
    system("pause");
    return 0;
}

