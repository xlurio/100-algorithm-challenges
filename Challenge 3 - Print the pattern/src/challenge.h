#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *get_line(int pattern_length);
char *get_number(int number, int pattern_length);

char *get_pattern(int pattern_length)
{
    for (int i = pattern_length; i > 0; i--)
    {
        get_line(i);
        printf("$");
    }
}

char *get_line(int pattern_length)
{
    for (int i = pattern_length; i > 0; i--)
    {
        get_number(i, pattern_length);
    }
}

char *get_number(int number, int pattern_length)
{
    int length = (pattern_length * 2) - 1;
    char *numbers = (char *)malloc(length * sizeof(char));

    for (int i = pattern_length; i > 0; i--)
    {
        printf("%i ", number);
    }
}