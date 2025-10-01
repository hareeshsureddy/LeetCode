int largestPerimeter(int* nums, int numsSize) {
    int largestPerimeter=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            for(int k=j+1;k<numsSize;k++){
                if(nums[i]<nums[j]+nums[k] && nums[j]<nums[i]+nums[k] && nums[k]<nums[j]+nums[i]){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(largestPerimeter<sum) largestPerimeter=sum;
                }
            }
        }
    }
    return largestPerimeter;
}