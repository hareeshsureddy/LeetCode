int longestSubarray(int* nums, int numsSize) {
    int max=0,i=0,j=0,zeroCnt=0;
    while(j<numsSize){
        if(!nums[j]) zeroCnt++;
        if(zeroCnt>1){
            max=(max<(j-i-1))?(j-i-1):max;
            while(zeroCnt>1){
                if(!nums[i++]) zeroCnt--;  
            }
        }
        j++;
    }
    max=(max<(j-i-1))?(j-i-1):max;
    return max;
}