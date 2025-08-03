int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int longestConsecutive(int* nums, int numsSize) {
    if(!numsSize) return 0;
    qsort(nums,numsSize,sizeof(int),compare);
    int start=nums[0],max=0,i;
    for( i=1;i<numsSize;i++){
        if(abs(nums[i-1]-nums[i])>1){
            max=(abs(start-nums[i-1]))>max?(abs(start-nums[i-1])):max;
            start=nums[i];
        }
    }
    max=(abs(start-nums[i-1]))>max?(abs(start-nums[i-1])):max;
    return max+1;
}