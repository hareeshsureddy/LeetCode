
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int largestPerimeter(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 2; i++) {
        if (nums[i] < nums[i+1] + nums[i+2]) {
            return nums[i] + nums[i+1] + nums[i+2];
        }
    }
    return 0;
} 

/*
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
}*/