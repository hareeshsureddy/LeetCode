/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
 }
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    /*
    int i=0;
    while(i<numsSize && nums[i]<0){
        nums[i]=abs(nums[i]);
        i++;
    }
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize;i++){
        nums[i]=pow(nums[i],2);
    }
    *returnSize=numsSize;
    return nums;
    */
    int *result=(int*)malloc(numsSize*sizeof(int));
    int k=0;
    for(;k<numsSize && nums[k]<0;k++){
        nums[k]=pow(abs(nums[k]),2);
    }
    for(;k<numsSize;k++){
        nums[k]=pow(nums[k],2);
    }
    int i=0,j=numsSize-1;
    int index=j;
    while(i<j){
        result[index--]=(nums[i]<nums[j])?nums[j--]:nums[i++];
    }
    result[index]=nums[i];
    *returnSize=numsSize;
    return result;
}