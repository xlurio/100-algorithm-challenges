#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
  int to_find = 5;
  int array_to_search[] = {1, 2, 3, 4, 5};

  int expected_index = 4;
  int actual_index = find_element(to_find, array_to_search, 0, 4);

  EXPECT_EQ(expected_index, actual_index);
}

TEST(ChallengeTests, test_case2)
{
  int to_find = 5;
  int array_to_search[] = {11, 22, 33, 44, 55};

  int expected_index = -1;
  int actual_index = find_element(to_find, array_to_search, 0, 4);

  EXPECT_EQ(expected_index, actual_index);
}