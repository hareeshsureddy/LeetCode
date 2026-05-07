static int map[101];
int sumDivisibleByK(int* nums, int numsSize, int k) {
    memset(map,0,sizeof(map));
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    int res=0;
    for(int i=1;i<101;i++){
        if(map[i]%k==0){
            res+=(map[i]*i);
        }
    }
    return res;
}