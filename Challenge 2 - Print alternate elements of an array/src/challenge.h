#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *get_alternate_elements(int *array_to_alternate)
{
    int array_length = sizeof(array_to_alternate) / sizeof(short);

    int result_length = ceil(array_length / 2);
    int *result_array = (int *)malloc(result_length * sizeof(short));

    int result_index = 0;

    for (int i = 0; i <= array_length; i = i + 2)
    {
        result_array[result_index] = array_to_alternate[i];
        result_index++;
    }

    return result_array;
}

void print_array(int *array_to_print, int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        printf("%i ", array_to_print[i]);
    }
}