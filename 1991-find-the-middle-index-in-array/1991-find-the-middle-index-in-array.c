/*
int findMiddleIndex(int* nums, int numsSize) {
    if(numsSize==1) return 0;
    int *leftSum=(int*)malloc(sizeof(int)*numsSize);
    leftSum[0]=nums[0];
    for(int i=1;i<numsSize;i++)
        leftSum[i]=leftSum[i-1]+nums[i];
    for(int i=numsSize-2;i>=0;i--)
        nums[i]+=nums[i+1];
    if(nums[1]==0) {
        free(leftSum);
        return 0;
    }
    for(int i=1;i<numsSize-1;i++){
        if(leftSum[i-1]==nums[i+1]) {
        free(leftSum);
        return i;
    }
    }
    if(leftSum[numsSize-2]==0) {
        free(leftSum);
        return numsSize-1;
    }
        free(leftSum);
        return -1;
} */

int findMiddleIndex(int* nums, int numsSize) {
    
    int total =0;
    int leftSum =0;
    for(int i =0;i<numsSize;i++){
        total += nums[i];
    }

    for(int i =0;i < numsSize; i++){
        int rightSum = total - leftSum - nums[i];

        if(leftSum == rightSum){
            return i;
        }else{
            leftSum += nums[i];
        }
    }
    return -1;
}