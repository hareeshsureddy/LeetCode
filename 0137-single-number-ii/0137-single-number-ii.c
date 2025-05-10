int singleNumber(int* nums, int numsSize) {
    uint32_t result=0;
    for (uint8_t k=0;k<32;k++){
        uint32_t temp=(1u<<k);
        uint32_t OnesCnt=0;
        for (int i=0;i<numsSize;i++){
            if(nums[i]&temp)
            OnesCnt++;
        }
        if(OnesCnt%3)
        result|=temp;
    }
    return result;
}