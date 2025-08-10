int duplicateNumbersXOR(int* nums, int numsSize) {
    bool map[51]={false};
    int duplicateNumbersXOR=0;
    for(int i=0;i<numsSize;i++){
        if(map[nums[i]])
        duplicateNumbersXOR^=nums[i];
        map[nums[i]]=true;
    }
    return duplicateNumbersXOR;
}