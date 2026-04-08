int xorAfterQueries(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    for(int q=0;q<queriesSize;q++){
        int idx=queries[q][0];
        int r=queries[q][1];
        int v=queries[q][3];
        int k=queries[q][2];
        while(idx<=r){
            nums[idx] = (nums[idx] * v) % (109 + 7);
            idx+=k;
        }
    }
    int xorAfterQueries=0;
    for(int i=0;i<numsSize;i++){
        xorAfterQueries^=nums[i];
    }
    return xorAfterQueries;
}