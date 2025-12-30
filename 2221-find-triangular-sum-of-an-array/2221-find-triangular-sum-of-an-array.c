int triangularSum(int* nums, int numsSize) {
    while(numsSize>1){
        for(int i=0;i<numsSize-1;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
        }
        numsSize--;
    }
    return nums[0];
}