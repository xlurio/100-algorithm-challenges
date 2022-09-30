#include <stdio.h>

int find_element(int element, int *array_to_search, int first_index, int last_index) {
  if (last_index >= first_index) {
    int mid_index = (last_index + first_index)/2;
    int pivot = array_to_search[mid_index];

    if (element == pivot) {
      return mid_index;

    } else if (element < pivot) {
      find_element(element, array_to_search, first_index, mid_index - 1);

    } else if (element > pivot) {
      find_element(element, array_to_search, mid_index + 1, last_index);

    } else {
      return -1;
      
    }
  }
}