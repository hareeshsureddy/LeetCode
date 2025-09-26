int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int binarySearch(int *nums,int l,int r,int target){
    int k=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]<target) {
            k=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return k;
}
int triangleNumber(int* nums, int numsSize) {
    if(numsSize<3) return 0;
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(!nums[i]) continue;
        for(int j=i+1;j<numsSize;j++){
            int sum=nums[i]+nums[j];
            int k=binarySearch(nums,j+1,numsSize-1,sum);
            if(k!=-1) count+=k-j;
        }
    }
    return count;
}