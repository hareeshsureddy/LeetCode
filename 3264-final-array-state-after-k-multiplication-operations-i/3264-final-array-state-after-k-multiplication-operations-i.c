/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    *returnSize=numsSize;
    while(k--){
        int minIndex=0;
        for(int i=1;i<numsSize;i++){
            minIndex=(nums[i]<nums[minIndex]?i:minIndex);
        }
        nums[minIndex]*=multiplier;
    }
    return nums;
}