#include <stdlib.h>

char *print_pattern(int pattern_length)
{
}

char *print_line(int pattern_length)
{
    int i, j;

    for (int i = pattern_length; i > 0; i--)
    {
        for (int j = pattern_length; j > 0; j--)
        {
            printf("%i", i);
        }
    }
}