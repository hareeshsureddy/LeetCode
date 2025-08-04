int minOperations(int* nums, int numsSize, int k) {
    for(int i=1;i<numsSize;i++){
        nums[0]+=nums[i];
    }
    return nums[0]%k;
}