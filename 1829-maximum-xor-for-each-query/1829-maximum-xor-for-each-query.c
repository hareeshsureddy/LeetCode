/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) {
    int totalXor=0;
    for(int i=0;i<numsSize;i++){
        totalXor^=nums[i];
    }
    int *res=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        int kMax=(~totalXor)&((1<<maximumBit)-1);
        totalXor^=nums[numsSize-i-1];
        res[i]=kMax;
    }
    *returnSize=numsSize;
    return res;
} 
 /* O(N∗2^Maximumbit)  TLE */
 /*
int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) {
    int totalXor=0;
    for(int i=0;i<numsSize;i++){
        totalXor^=nums[i];
    }
    int maxK=1<<maximumBit;
    int *res=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        int max=0;
        int kMax=-1;
        for(int k=0;k<maxK;k++){
            int nQueryMax=totalXor^k;
            if(max<nQueryMax){
                kMax=k;
                max=nQueryMax;
            } 
        }
        totalXor^=nums[numsSize-i-1];
        res[i]=kMax;
    }
    *returnSize=numsSize;
    return res;
} */