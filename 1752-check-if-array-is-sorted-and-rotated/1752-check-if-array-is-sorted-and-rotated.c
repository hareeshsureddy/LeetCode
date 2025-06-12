bool check(int* nums, int numsSize) {
    int minStartIdx=0;
    if (numsSize==1) return true;
    for( int i=1;i<numsSize;i++){
        minStartIdx=(nums[i]<nums[minStartIdx])?i:minStartIdx;
    }
    int i=1;
    while(i<numsSize && nums[minStartIdx]==nums[numsSize-i]){
        minStartIdx=numsSize-i;
        i++;
    }
    for(int i=0;i<numsSize-1;i++){
        if(nums[(i+minStartIdx)%numsSize]>nums[(i+minStartIdx+1)%numsSize])
        return false;
    }
    return true;
}