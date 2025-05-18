/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
 }
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
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
}