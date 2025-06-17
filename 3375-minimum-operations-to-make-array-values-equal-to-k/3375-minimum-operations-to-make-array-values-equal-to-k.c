int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int minOperations(int* nums, int numsSize, int k) {
    int cnt=0;
    /*
    qsort(nums,numsSize,sizeof(nums[0]),compare);
    for (int i=numsSize-1;i>0;i--){
        if(nums[i]==nums[i-1]) continue;
        else{
            cnt++;
            if(nums[i]==k) break;
        }
    }
    if (nums[0]==k) return cnt;
    if(nums[0]>k) return cnt+1;
    return -1;
    */
    int map[101]={0};
    for(int i=0;i<numsSize;i++){
        if(nums[i]<k) return -1;
        if(k!=nums[i] && !map[nums[i]])
        cnt++;
        map[nums[i]]=1;
    }
    return cnt;
}