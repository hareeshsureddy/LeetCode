int alternatingSum(int* nums, int numsSize) {
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<numsSize;i++){
        if(i&1)
        oddSum+=nums[i];
        else
        evenSum+=nums[i];
    }
    return evenSum-oddSum;
}