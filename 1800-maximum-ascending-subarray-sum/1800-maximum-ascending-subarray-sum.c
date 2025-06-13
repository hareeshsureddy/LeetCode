int maxAscendingSum(int* nums, int numsSize) {
        if( numsSize==1) return nums[0];
        int maxSum=0,increSum=0;
        for (int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){
            if(increSum)
            increSum+=nums[i+1];
            else
            increSum=nums[i+1]+nums[i];
        }else{
           maxSum=(maxSum<increSum)?increSum:maxSum;
           maxSum=(maxSum<nums[i])?nums[i]:maxSum;
           increSum=0;
        }
    }
        maxSum=(maxSum<increSum)?increSum:maxSum;
        return maxSum;
}
/*
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
*/