int minimumOperations(int* nums, int numsSize) {
    int map[101]={0};
    int i,j=0;
    int result=0;
    for ( i=0;i<numsSize;i++){
        map[nums[i]]++;
        while(map[nums[i]]>1 && i-j>1){
            map[nums[j++]]--;
            map[nums[j++]]--;
            map[nums[j++]]--;
            result++;
        }
    }
    i--;
    if(i-j<=1 && map[nums[i]]>1) result++;
    else
    if(map[nums[j]]>1) result++;
    return result;
}