int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int minimumDifference(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),compare);
    int minimumDifference=INT_MAX;
    for(int i=0;i<numsSize-k+1;i++){
        int diff=nums[i+k-1]-nums[i];
        if(diff<minimumDifference)
        minimumDifference=diff;
    }
    if(minimumDifference==INT_MAX)
    minimumDifference=0;
    return minimumDifference;
}