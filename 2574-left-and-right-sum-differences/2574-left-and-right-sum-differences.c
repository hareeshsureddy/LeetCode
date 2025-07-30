/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    //metode-1
/*
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
*/
    for(int i=1;i<numsSize;i++){
        nums[i]+=nums[i-1];
    }
    res[0]=nums[numsSize-1]-nums[0];
    if(numsSize>1)
    res[numsSize-1]=nums[numsSize-2];
    for(int i=1;i<numsSize-1;i++){
        res[i]=abs(nums[numsSize-1]-nums[i-1]-nums[i]);
    }
    return res;
}