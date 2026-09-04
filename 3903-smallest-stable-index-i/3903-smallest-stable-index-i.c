int firstStableIndex(int* nums, int numsSize, int k) {
    int max=nums[0];
    for(int i=0;i<numsSize;i++){
        int cur=nums[i];
        if(cur>max) max=cur;
        int min=INT_MAX;
        for(int j=i;j<numsSize;j++){
            if(min>nums[j]) min=nums[j];
        }
        if((max-min)<=k){
            return i;
        }
    }
    return -1;
}