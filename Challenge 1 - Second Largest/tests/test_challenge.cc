#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    int array_to_test[] = {12, 35, 1, 10, 34, 1};
    int found_item = search_second_largest(array_to_test);
    int expected_result = 34;

    EXPECT_EQ(found_item, expected_result);
}

TEST(ChallengeTests, test_case2)
{
    int array_to_test[] = {10, 5, 10};
    int found_item = search_second_largest(array_to_test);
    int expected_result = 5;

    EXPECT_EQ(found_item, expected_result);
}