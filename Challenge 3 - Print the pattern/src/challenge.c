#include "challenge.h"

int main()
{
  int pattern = 3;

  int number_length = pattern * 2;
  int line_length = (number_length * number_length) + 1;
  int pattern_length = line_length * pattern;
  char *pattern_str = (char *)malloc(pattern_length * sizeof(char));

  pattern_str = get_pattern(pattern);
  printf(pattern_str);

  free(pattern_str);
  return 0;
}