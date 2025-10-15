int maxIncreasingSubarrays(int* nums, int numsSize) {
    int k=1;
    int currCnt=1,prevCnt=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]<nums[i]){
            currCnt++;
            continue;
        }
        k=fmax(k,currCnt/2);
        k=fmax(k,fmin(currCnt,prevCnt));
        prevCnt=currCnt;
        currCnt=1;
    }
        k=fmax(k,currCnt/2);
        k=fmax(k,fmin(currCnt,prevCnt));
    return k;
}