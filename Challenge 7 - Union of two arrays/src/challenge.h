#include <stdlib.h>

struct Union
{
    int *union_set;
    int size;
};

int checkIfShouldUnite(int item_to_unite, int *array_to_unite_to, int array_size);

struct Union *doUnion(int *first_array,
                      int first_array_size,
                      int *second_array,
                      int second_array_size)
{
    int *union_set =
        (int *)malloc((first_array_size + second_array_size) * sizeof(int));
    int i = 0, union_index = 0, shouldUnite = 0, second_array_current = 0;

    for (i = 0; i < first_array_size; i++)
    {
        union_set[++union_index] = first_array[i];
    }

    for (i = 0; i < second_array_size; i++)
    {
        second_array_current = second_array[i];
        shouldUnite = checkIfShouldUnite(second_array_current,
                                         first_array,
                                         first_array_size);

        if (shouldUnite == 1)
        {
            union_set[++union_index] = second_array_current;
        }
    }

    struct Union *arrays_union = (struct Union *)malloc(sizeof(struct Union));
    arrays_union->union_set = (int *)malloc(union_index * sizeof(int));

    for (i = 0; i < union_index; i++)
    {
        arrays_union->union_set[i] = union_set[i];
    }
    arrays_union->size = union_index;

    return arrays_union;
}

int checkIfShouldUnite(int item_to_unite, int *array_to_unite_to, int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        if (item_to_unite == array_to_unite_to[i])
        {
            return 0;
        }
    }

    return 1;
}