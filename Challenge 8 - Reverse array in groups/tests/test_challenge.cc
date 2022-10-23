#include <gtest/gtest.h>
#include <gmock/gmock.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    int expected_array[] = {3, 2, 1, 5, 4};

    int *array_for_tests = (int *)malloc(5 * sizeof(int));
    array_for_tests[0] = 1;
    array_for_tests[1] = 2;
    array_for_tests[2] = 3;
    array_for_tests[3] = 4;
    array_for_tests[4] = 5;
    reverse_in_groups(array_for_tests, 5, 3);

    int actual_array[] = {array_for_tests[0],
                          array_for_tests[1],
                          array_for_tests[2],
                          array_for_tests[3],
                          array_for_tests[4]};

    EXPECT_THAT(actual_array, ::testing::ElementsAreArray(expected_array));
}

TEST(ChallengeTests, test_case2)
{
    int expected_array[] = {8, 6, 5, 9};

    int *array_for_tests = (int *)malloc(4 * sizeof(int));
    array_for_tests[0] = 5;
    array_for_tests[1] = 6;
    array_for_tests[2] = 8;
    array_for_tests[3] = 9;
    reverse_in_groups(array_for_tests, 4, 3);

    int actual_array[] = {array_for_tests[0],
                          array_for_tests[1],
                          array_for_tests[2],
                          array_for_tests[3]};

    EXPECT_THAT(actual_array, ::testing::ElementsAreArray(expected_array));
}