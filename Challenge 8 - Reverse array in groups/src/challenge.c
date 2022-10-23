#include "challenge.h"

int main()
{
    int *array_for_tests = (int *)malloc(4 * sizeof(int));
    array_for_tests[0] = 5;
    array_for_tests[1] = 6;
    array_for_tests[2] = 8;
    array_for_tests[3] = 9;
    reverse_in_groups(array_for_tests, 4, 3);

    return 0;
}