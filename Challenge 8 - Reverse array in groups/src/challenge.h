void reverse_in_groups(int *array_to_reverse, int array_size, int group_size)
{
    int left_index = 0, right_index = 0, current_item = 0, next_group_start = 0;
    int last_index = 0, is_array_size_multiple_of_group_size = -1;

    for (int i = 0; i < array_size; i += group_size)
    {
        left_index = i;

        next_group_start = i + group_size - 1;
        last_index = array_size - 1;
        is_array_size_multiple_of_group_size = next_group_start < last_index;

        if (is_array_size_multiple_of_group_size)
            right_index = i + group_size - 1;
        else
            right_index = array_size - 1;

        while (left_index < right_index)
        {
            int current_item = array_to_reverse[left_index];
            array_to_reverse[left_index] = array_to_reverse[right_index];
            array_to_reverse[right_index] = current_item;
            left_index++;
            right_index--;
        }
    }
}