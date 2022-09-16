#include <gmock/gmock.h>
#include <gtest/gtest.h>

extern "C"
{
#include "../src/challenge.h"
}

TEST(ChallengeTests, test_case1)
{
    int array_to_test[] = {1, 2, 3, 4};

    int *alternated_array = (int *)malloc(1 * sizeof(short));
    alternated_array = get_alternate_elements(array_to_test);

    int result[] = {alternated_array[0],
                    alternated_array[1]};

    int expected_result[] = {1, 3};

    EXPECT_THAT(result, ::testing::ElementsAreArray(expected_result));
}

TEST(ChallengeTests, test_case2)
{
    int array_to_test[] = {1, 2, 3, 4, 5};

    int *alternated_array = (int *)malloc(2 * sizeof(short));
    alternated_array = get_alternate_elements(array_to_test);

    int result[] = {alternated_array[0],
                    alternated_array[1],
                    alternated_array[2]};

    int expected_result[] = {1, 3, 5};

    EXPECT_THAT(result, ::testing::ElementsAreArray(expected_result));
}