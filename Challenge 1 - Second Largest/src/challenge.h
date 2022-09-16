int get_last_index(int *array_to_search)
{
    if (sizeof(array_to_search) > 0)
    {
        return sizeof(array_to_search) / sizeof(short);
    }
    return 0;
}

int search_second_largest(int *array_to_search)
{
    int last_index = get_last_index(array_to_search);
    int largest_item = -1, second_largest_item = -1, is_largest = -1;
    int is_lower_than_largest = -1, is_greater_then_second_largest = -1;
    int is_second_largest = -1;

    if (last_index <= 0)
    {
        return -1;
    }

    if (array_to_search[0] > array_to_search[1])
    {
        largest_item = array_to_search[0];
        second_largest_item = array_to_search[1];
    }
    else if (array_to_search[0] < array_to_search[1])
    {
        largest_item = array_to_search[1];
        second_largest_item = array_to_search[0];
    }
    else
    {
        largest_item = array_to_search[0];
    }

    for (int i = 2; i <= last_index; i++)
    {
        is_largest = array_to_search[i] > largest_item;

        is_lower_than_largest = array_to_search[i] < largest_item;
        is_greater_then_second_largest = array_to_search[i] > second_largest_item;
        is_second_largest = is_lower_than_largest && is_greater_then_second_largest;

        if (is_largest)
        {
            largest_item = array_to_search[i];
        }
        else if (is_second_largest)
        {
            second_largest_item = array_to_search[i];
        }
    }

    return second_largest_item;
}