int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int partitionArray(int* nums, int numsSize, int k) {
    if(numsSize==1) return 1;
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    int cnt=0,j=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i]-nums[j]<=k) continue;
        cnt++;
        j=i;
    }
    cnt++;
    return cnt;
}