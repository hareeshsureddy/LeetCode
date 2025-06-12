int maxAdjacentDistance(int* nums, int numsSize) {
    int MaxDiff=abs(nums[0]-nums[numsSize-1]);
    for(int i=0;i<numsSize-1;i++){
        int diff=abs(nums[i]-nums[i+1]);
        MaxDiff=(MaxDiff<diff)?diff:MaxDiff;
    }
    return MaxDiff;
}