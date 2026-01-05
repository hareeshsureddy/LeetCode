int repeatedNTimes(int* nums, int numsSize) {
    uint16_t map[10001]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
        if(map[nums[i]]==2) return nums[i];
    }
    return nums[numsSize-1];
}