#include <stdio.h>

void print_array(int *array_to_print)
{
    int array_length = sizeof(array_to_print) / sizeof(short);

    for (int i = 0; i <= array_length; i++)
    {
        printf("%i ", array_to_print[i]);
    }
}