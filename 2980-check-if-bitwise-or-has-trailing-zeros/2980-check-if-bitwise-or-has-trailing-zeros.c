bool hasTrailingZeros(int* nums, int numsSize) {
    int hasTrailingZeros=0;
    for(int i=0;i<numsSize;i++){
        if(!(nums[i]&1)) hasTrailingZeros++;
        if(hasTrailingZeros==2) return true;
    }
    return false;
}