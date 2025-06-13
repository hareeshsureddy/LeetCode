int longestMonotonicSubarray(int* nums, int numsSize) {
    int maxLen=1,decreCnt=1,increCnt=1;
    for (int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){
            increCnt++;
        }else{
           maxLen=(maxLen<increCnt)?increCnt:maxLen;
           increCnt=1;
        }
        if(nums[i]>nums[i+1]){
            decreCnt++;
        }else{
           maxLen=(maxLen<decreCnt)?decreCnt:maxLen;
           decreCnt=1;
        }
    }
    maxLen=(maxLen<increCnt)?increCnt:maxLen;
    maxLen=(maxLen<decreCnt)?decreCnt:maxLen;
    return maxLen;
}