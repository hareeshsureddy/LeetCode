int countPartitions(int* nums, int numsSize) {
    int totalSum=0;
    int currSum=0;
    int countPartitions=0;
    for(int i=0;i<numsSize;i++){
        totalSum+=nums[i];
    }
    for(int i=0;i<numsSize-1;i++){
        currSum+=nums[i];
        totalSum-=nums[i];
        if((currSum-totalSum)%2==0){
            countPartitions++;
        }
    }
    return countPartitions;
}