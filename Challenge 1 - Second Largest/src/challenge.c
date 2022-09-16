#include "stdio.h"
#include "challenge.h"

int main()
{
    printf("Creating array...\n");
    int array_to_search[] = {12, 35, 1, 10, 34, 1};

    printf("\nArray created:\t");

    printf("\n************************\n");

    printf("\nSearching second largest\n");
    int found_value = search_second_largest(array_to_search);

    printf("\nSecond largest is: %i\n", found_value);

    printf("\n");

    return 0;
}