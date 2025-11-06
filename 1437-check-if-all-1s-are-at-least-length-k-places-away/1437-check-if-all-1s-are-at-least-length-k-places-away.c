bool kLengthApart(int* nums, int numsSize, int k) {
    int i=0,j=-1;
    while(i<numsSize){
        while(i<numsSize && nums[i]==0) i++;
        if(i<numsSize && j>=0){
            if(i-j-1<k) return false;
        }
        j=i;
        i++;
    }
    return true;
}