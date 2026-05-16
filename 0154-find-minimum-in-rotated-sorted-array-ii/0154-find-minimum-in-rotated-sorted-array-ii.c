int findMin(int* nums, int numsSize) {
    int findMin=INT_MAX;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<findMin){
            findMin=nums[i];
        }
    }
    return findMin;
}