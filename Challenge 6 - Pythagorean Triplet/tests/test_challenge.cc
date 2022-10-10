#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
  int array_for_test[] = {3, 2, 4, 6, 5};
  int expected_result = 1;
  int actual_result = check_for_pythagorean(array_for_test, 5);

  EXPECT_EQ(expected_result, actual_result);
}

TEST(ChallengeTests, test_case2)
{
  int array_for_test[] = {3, 8, 5};
  int expected_result = 0;
  int actual_result = check_for_pythagorean(array_for_test, 3);

  EXPECT_EQ(expected_result, actual_result);
}