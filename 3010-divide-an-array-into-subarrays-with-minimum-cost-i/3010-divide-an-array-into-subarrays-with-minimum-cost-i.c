int minimumCost(int* nums, int numsSize) {
    int firstSmall=51;
    int secondSmall=51;
    for(int i=1;i<numsSize;i++){
        if(nums[i]<firstSmall){
            secondSmall=firstSmall;
            firstSmall=nums[i];
        }else if(nums[i]<secondSmall){
            secondSmall=nums[i];
        }
    }
    return nums[0]+firstSmall+secondSmall;
}