
//Two Pass
/*
int maxFrequencyElements(int* nums, int numsSize) {
    uint8_t map[101]={0};
    for (uint8_t i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    uint8_t max=0;
    for (int i=1;i<101;i++){
        if(max<map[i]) max=map[i];
    }
    int result=0;
    for (int i=1;i<101;i++){
        if(max==map[i]) result+=map[i];
    }
    return result;
}*/
// Single pass
int maxFrequencyElements(int* nums, int numsSize) {
    uint8_t map[101]={0};
    int max=0,cnt=0;
    for (uint8_t i=0;i<numsSize;i++){
        map[nums[i]]++;
        if(map[nums[i]]>max){
            max=map[nums[i]];
            cnt=max;
        }else if(map[nums[i]]==max){
            cnt+=max;
        }
    }
    return cnt;
}