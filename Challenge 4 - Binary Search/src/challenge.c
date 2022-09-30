#include "challenge.h"


int main(void) {
  int to_find = 5;
  int array_to_search[] = {1, 2, 3, 4, 5};

  int expected_index = 4;
  int actual_index = find_element(to_find, array_to_search, 0, 4);

  return 0;
}