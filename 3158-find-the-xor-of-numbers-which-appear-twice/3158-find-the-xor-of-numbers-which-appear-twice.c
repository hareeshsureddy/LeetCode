int duplicateNumbersXOR(int* nums, int numsSize) {
    int map[51]={0};
    int duplicateNumbersXOR=0;
    for(int i=0;i<numsSize;i++){
        if(++map[nums[i]]==2)
        duplicateNumbersXOR^=nums[i];
    }
    return duplicateNumbersXOR;
}