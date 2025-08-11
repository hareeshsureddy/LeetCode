int searchInsert(int* nums, int numsSize, int target) {
    int l=0,r=numsSize-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]<target)
        l=mid+1;
        else
        r=mid-1;
    }
    if(nums[mid]<target)
        return mid+1;
        else
        return mid;
}