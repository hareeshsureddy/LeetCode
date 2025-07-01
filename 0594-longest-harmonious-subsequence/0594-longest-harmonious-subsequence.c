int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int findLHS(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    if(nums[0]==nums[numsSize-1]) return 0;
    int i=0,j=0,k=0,maxSize=0;
    while(i<numsSize){
        while(k<numsSize && nums[k]==nums[i]){
            k++;
        }
        if(k<numsSize && nums[k]-nums[i]==1){
            j=k;
            while(j<numsSize && nums[j]-nums[i]==1){
            j++;
            }
        }
        maxSize=(maxSize<j-i)?j-i:maxSize;
        while((i<numsSize-1) && nums[i]==nums[i+1]) i++;
        i++;
    }
    return (maxSize==1)?0:maxSize;
}