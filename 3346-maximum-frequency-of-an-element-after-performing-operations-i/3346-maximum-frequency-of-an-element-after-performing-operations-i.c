int maxFrequency(int* nums, int numsSize, int k, int numOperations) {
    int max=1;
    for (int i=0;i<numsSize;i++){
        if(max<nums[i]) max=nums[i];
    }
    int *freqMap=(int*)calloc(sizeof(int),(max+k+1));
    for(int i=0;i<numsSize;i++){
        freqMap[nums[i]]++;
    }
    for(int i=1;i<max+k+1;i++)
    freqMap[i]+=freqMap[i-1];
    int result=1;
    for(int i=0;i<=max;i++){
        if(freqMap[i]==0) continue;
        int l=fmax(0,i-k);
        int r=fmin(max,i+k);
        int TotalCnt=freqMap[r]-(l>0?freqMap[l-1]:0);
        int TargetCnt=freqMap[i]-(i>0?freqMap[i-1]:0);
        int NeedCon=TotalCnt-TargetCnt;
        int maxPossible=TargetCnt+fmin(numOperations,NeedCon);
        result=fmax(result,maxPossible);
    }
    free(freqMap);
    return result;
}