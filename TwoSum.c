/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 给一个数组，求获得target的数值的索引号
 * [3,4,8] target:12 输出[1,2]
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *index = (int *)malloc(2 * sizeof(int));
    if (!index)
        return NULL;

    int *i = &index[0];
    int *j = &index[1];

    for ( *i = 0; *i < numsSize -1 ; (*i)++) {
        for ( *j = *i + 1; *j < numsSize; (*j)++) {
            if ((nums[*i] + nums[*j]) == target)
                return index;
        }
    }

    return NULL;
}
