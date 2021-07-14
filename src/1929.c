#include <stdio.h>
#include "malloc.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    if (!nums || numsSize <= 0) {
        return NULL;
    }
    *returnSize = 2 * numsSize;
    int* res = (int *)malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < numsSize; ++i) {
        res[i] = nums[i];
        res[i + numsSize] = nums[i];
    }
    return res;
}

int main() {
    int input[] = {1,2,1};
    int retSiz = 0;
    int* res = getConcatenation(input, 3, &retSiz);
    for (int i = 0; i < retSiz; ++i) {
        printf("%d\n", res[i]);
    }
    free(res);
    return 0;
}
