int getMinDistance(int* nums, int numsSize, int target, int start) {
    int getMinDistance=INT_MAX;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            int dis=abs(i-start);
            if(dis<getMinDistance)
            getMinDistance=dis;
        }
    }
    return getMinDistance;
}