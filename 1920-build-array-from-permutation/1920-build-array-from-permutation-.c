/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    /* T.C O(n) & S.C O(n)*/
    /*
    int *result=(int*)malloc(numsSize*sizeof(int));
    for (int i=0;i<numsSize;i++){
        result[i]=nums[nums[i]];
    }
    return result;
    */
    /* T.C O(n) & S.C O(1)*/
    for (int i=0;i<numsSize;i++){
        if(i>nums[i])
            nums[i]=(nums[i]+((nums[nums[i]]%numsSize)*numsSize));
            else
            nums[i]=(nums[i]+(nums[nums[i]]*numsSize));
    }
        for (int i=0;i<numsSize;i++)
        nums[i]=nums[i]/numsSize;
        return nums;
}