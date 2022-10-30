#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    int number_for_test = 1;

    int actual_result = is_power_of_2(number_for_test);
    int expected_result = 1;

    EXPECT_EQ(expected_result, actual_result);
}

TEST(ChallengeTests, test_case2)
{
    int number_for_test = 98;

    int actual_result = is_power_of_2(number_for_test);
    int expected_result = 0;

    EXPECT_EQ(expected_result, actual_result);
}