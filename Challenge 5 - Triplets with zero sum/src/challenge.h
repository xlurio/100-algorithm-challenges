int check_for_third_value(
  int value_to_find, int *array_to_search, int first_index, int size
);

int count_triplets(int *array_to_check, int size) {
  int first_value, second_value, value_to_find, is_there_triple_result_zero = 0;
  int i, j;

  for (i = 0; i < size; i++) {
    first_value = array_to_check[i];

    for (j = i + 1; j < size; j++) {
      second_value = array_to_check[j];

      value_to_find = - first_value - second_value;

      is_there_triple_result_zero = check_for_third_value(
        value_to_find, array_to_check, j + 1, size
      );

      if (is_there_triple_result_zero) {
        return 1;
      }
    }
  }

  return 0;
}

int check_for_third_value(
  int value_to_find, int *array_to_search, int first_index, int size
) {
  int current_index = 0;

  for (int i = first_index; i < size; i++) {
    current_index = array_to_search[i];

    if (current_index == value_to_find) {
      return 1;
    }
  }

  return 0;
}