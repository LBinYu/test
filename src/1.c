#include "stdio.h"
#include "malloc.h"

int *twoSum(int *nums, int numsSize, int target)
{
    int i, j;
    int *result = NULL;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result = (int *)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int* res = twoSum(nums, 4, target);
    printf("res 0 is %d, 1 is %d\n", res[0], res[1]);
    return 0;
}
