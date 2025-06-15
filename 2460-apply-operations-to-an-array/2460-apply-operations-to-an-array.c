/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int i,j;
    for (i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]=0;
            i++;
        }
    }
     // return nums;
     i=0;
     j=i+1;
     while(i<numsSize && j<numsSize){
        while(i<numsSize && nums[i]!=0) i++;
        j=i+1;
        while(j<numsSize && nums[j]==0) j++;
        if(i<numsSize && j<numsSize && !(nums[i]) && nums[j]){
            nums[i]=nums[j];
            nums[j]=0;
            i++;
            j++;
        }
    }
 /*    while(i<j){
        if(nums[i]!=0)  i++;
        if(nums[j]==0)  j--;
        if(!(nums[i]) && nums[j]!=0){
            nums[i]=nums[j];
            nums[j]=0;
            i++;
            j--;
        }
     } */
     return nums;
}