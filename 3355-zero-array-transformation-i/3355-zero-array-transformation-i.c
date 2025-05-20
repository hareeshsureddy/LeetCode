bool isZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    /* int sum=0;
    for (int i=0;i<numsSize;i++){
            sum+=nums[i];
    }
    for (int i=0;i<queriesSize;i++){
        int minus=(queries[i][1]-queries[i][0])+1;
        if(sum<=minus) return true;
        else
        sum-=minus;
    }
    return false; */
    int *prefixSum=(int*)calloc(numsSize,sizeof(int));
    for (int i=0;i<queriesSize;i++){
        if(queries[i][1]+1<numsSize)
        prefixSum[queries[i][1]+1]-=1;
        prefixSum[queries[i][0]]+=1;
    }
    for (int i=1;i<numsSize;i++){
        if(prefixSum[i-1]<nums[i-1]) return false;
        prefixSum[i]+=prefixSum[i-1];
    }
    if(prefixSum[numsSize-1]<nums[numsSize-1]) return false;
    return true;
}