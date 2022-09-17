#include <gmock/gmock.h>
#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    char result_array[40];
    strcpy(result_array, get_pattern(2));

    char expected_result[] = "2 2 1 1 $2 1 $";

    EXPECT_THAT(result_array, ::testing::StrEq(expected_result));
}

TEST(ChallengeTests, test_case2)
{
    char result_array[40];
    strcpy(result_array, get_pattern(3));

    char expected_result[] = "3 3 3 2 2 2 1 1 1 $3 3 2 2 1 1 $3 2 1 $";

    EXPECT_THAT(result_array, ::testing::StrEq(expected_result));
}