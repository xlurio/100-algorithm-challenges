#include <stdlib.h>
#include <stdio.h>

char *get_line(int pattern_length);
char *get_number(int number, int pattern_length);

char *get_pattern(int pattern_length)
{
    for (int i = pattern_length; i > 0; i++)
    {
        get_line(i);
    }
}

char *get_line(int pattern_length)
{
    int i;

    for (int i = pattern_length; i > 0; i--)
    {
        get_number(i, pattern_length);
    }
}

char *get_number(int number, int pattern_length)
{
    for (int j = pattern_length; j > 0; j--)
    {
        printf("%i", number);
    }
}