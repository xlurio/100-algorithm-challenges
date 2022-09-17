#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

char *get_line(int pattern_length, int max_number);
char *get_line(int max_number, int times);
char *get_number_set(int number, int times);

char *get_pattern(int pattern_length)
{
    int number_length = pattern_length * 2;
    int line_length = (number_length * number_length) + 1;
    char *line = (char *)malloc(line_length * sizeof(char));

    int pattern_str_length = line_length * pattern_length;
    char *pattern = (char *)malloc(pattern_str_length * sizeof(char));
    strcpy(pattern, "");

    for (int i = pattern_length; i > 0; i--)
    {
        line = get_line(pattern_length, i);
        strcat(pattern, line);
        strcat(pattern, "$");
    }

    free(line);
    return pattern;
}

char *get_line(int max_number, int times)
{
    int set_length = 2;
    char* number_set = (char *)malloc(set_length * sizeof(char));

    int line_length = set_length * times;
    char *line = (char *)malloc(line_length * sizeof(char));
    strcpy(line, "");

    for (int i = max_number; i > 0; i--)
    {
        number_set = get_number_set(i, times);
        strcat(line, number_set);
    }

    free(number_set);
    return line;
}

char *get_number_set(int number, int times)
{
    char *number_str = (char *)malloc(2 * sizeof(char));

    int length = times * 2;
    char *number_set = (char *)malloc(length * sizeof(char));
    strcpy(number_set, "");

    for (int i = times; i > 0; i--)
    {
        sprintf(number_str, "%i ", number);
        strcat(number_set, number_str);
    }

    free(number_str);
    return number_set;
}