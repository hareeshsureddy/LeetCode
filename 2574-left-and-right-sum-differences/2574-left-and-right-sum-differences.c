/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        int leftSum=0,rightSum=0,j=0;
        while(j<i){
            leftSum+=nums[j++];
        }
        j++;
        while(j<numsSize){
            rightSum+=nums[j++];
        }
        res[i]=abs(rightSum-leftSum);
    }
    return res;
}