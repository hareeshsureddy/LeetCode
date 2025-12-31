int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int minPairSum(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),compare);
    int minPairSum=0;
    int i=0,j=numsSize-1;
    while(i<j){
        int sum=nums[i++]+nums[j--];
        if(sum>minPairSum)
        minPairSum=sum;
    }
    return minPairSum;
}