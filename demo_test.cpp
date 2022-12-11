//
// Test the twoSum() function.
//
#include "demo.h"
#include "gtest/gtest.h"

//
// Example 1:
//
//       Input: nums = [2,7,11,15], target = 9
//      Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
//
TEST(twoSum, example_1)
{
    int nums[] = { 2, 7, 11, 15 };
    int returnSize = 0;
    int *result = twoSum(nums, 4, 9, &returnSize);

    EXPECT_EQ(returnSize, 2);
    ASSERT_NE(result, nullptr);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}

//
// Example 2:
//
//  Input: nums = [3,2,4], target = 6
// Output: [1,2]
//
TEST(twoSum, example_2)
{
    int nums[] = { 3, 2, 4 };
    int returnSize = 0;
    int *result = twoSum(nums, 3, 6, &returnSize);

    EXPECT_EQ(returnSize, 2);
    ASSERT_NE(result, nullptr);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
}

//
// Example 3:
//
//  Input: nums = [3,3], target = 6
// Output: [0,1]
//
TEST(twoSum, example_3)
{
    int nums[] = { 3, 3 };
    int returnSize = 0;
    int *result = twoSum(nums, 2, 6, &returnSize);

    EXPECT_EQ(returnSize, 2);
    ASSERT_NE(result, nullptr);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
