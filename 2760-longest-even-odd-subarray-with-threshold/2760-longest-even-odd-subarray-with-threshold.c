int longestAlternatingSubarray(int* nums, int numsSize, int threshold) {
    int i=0,j=0,max=0;
    while(i<numsSize){
        while(i<numsSize && nums[i]%2!=0) i++;
        if(i<numsSize && nums[i]<=threshold){
        j=i;
        while(j+1<numsSize && nums[j+1]<=threshold && nums[j]%2!=nums[j+1]%2) j++;
        int len=j-i+1;
        max=(max<len)?len:max;
        i=j+1;
        }else
        i++;
    }
    return max;
}