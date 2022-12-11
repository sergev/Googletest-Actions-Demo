//
// Task: https://leetcode.com/problems/two-sum/
//
// Given an array of integers nums and an integer target, return
// indices of the two numbers such that they add up to target.
//
// You may assume that each input would have exactly one
// solution, and you may not use the same element twice.
//
// You can return the answer in any order.
//
#include <stdexcept>
#include "demo.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    int *ret = (int*) calloc(2, sizeof(int));
    for (i = 0; i < numsSize; i++)
    {
        int key = target - nums[i];
        for (j = i + 1; j < numsSize; j++)
            if (nums[j] == key)
            {
                ret[0] = i;
                ret[1] = j;
            }
    }
    *returnSize = 2;
    return ret;
}
