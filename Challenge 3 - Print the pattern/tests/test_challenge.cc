#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    char *result = (char *)malloc(14 * sizeof(char));
    result = print_pattern(2);

    char result_array[15];
    strcpy(result, result_array);

    char expected_result[] = "2 2 1 1 $2 1 $";

    EXPECT_TRUE(result_array == expected_result);
}

TEST(ChallengeTests, test_case2)
{
    char *result = (char *)malloc(39 * sizeof(char));
    result = print_pattern(3);

    char result_array[40];
    strcpy(result, result_array);

    char expected_result[] = "3 3 3 2 2 2 1 1 1 $3 3 2 2 1 1 $3 2 1 $";

    EXPECT_TRUE(result_array == expected_result);
}