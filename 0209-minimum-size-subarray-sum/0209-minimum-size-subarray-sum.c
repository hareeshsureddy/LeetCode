int minSubArrayLen(int target, int* nums, int numsSize) {
    int min=INT_MAX,i=0,curSum=0;
    for (int j=0;j<numsSize;j++){
        curSum+=nums[j];
        while(curSum>=target){
            min=(min>(j-i+1))?(j-i+1):min;
            curSum-=nums[i++];
        }
    }
    if(min==INT_MAX) return 0;
    return min;
}