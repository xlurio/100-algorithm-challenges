#include "challenge.h"

int main()
{
    printf("Creating array...\n");
    int array_to_alternate[] = {1, 2, 3, 4, 5};

    printf("\nArray created:\t");
    print_array(array_to_alternate, 5);

    printf("\n************************\n");

    printf("\nAlternating array...");

    int *alternated_array = (int *)malloc(2 * sizeof(short));
    alternated_array = get_alternate_elements(array_to_alternate);

    printf("\nArray alternated:\t");
    print_array(alternated_array, 3);

    printf("\n\n************************\n");

    return 0;
}