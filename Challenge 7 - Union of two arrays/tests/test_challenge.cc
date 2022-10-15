#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
  int array_for_test1[] = {5, 3};
  int array_for_test2[] = {1, 2, 3, 4, 5};
  struct Union *first_union = (struct Union *)malloc(sizeof(struct Union));
  first_union = doUnion(array_for_test1, 2, array_for_test2, 5);

  int array_for_test3[] = {1, 2, 3};
  struct Union *second_union = (struct Union *)malloc(sizeof(struct Union));
  second_union = doUnion(first_union->union_set, first_union->size, array_for_test2, 3);

  int expected_result = 5;
  int actual_result = second_union->size;

  EXPECT_EQ(expected_result, actual_result);
}

TEST(ChallengeTests, test_case2)
{
  int array_for_test1[] = {6, 2};
  int array_for_test2[] = {85, 25, 1, 32, 54, 6};
  struct Union *first_union = (struct Union *)malloc(sizeof(struct Union));
  first_union = doUnion(array_for_test1, 2, array_for_test2, 6);

  int array_for_test3[] = {85, 2};
  struct Union *second_union = (struct Union *)malloc(sizeof(struct Union));
  second_union = doUnion(first_union->union_set, first_union->size, array_for_test2, 2);

  int expected_result = 7;
  int actual_result = second_union->size;

  EXPECT_EQ(expected_result, actual_result);
}