long long zeroFilledSubarray(int* nums, int numsSize) {
    long long cnt=0,j=0;
    for(int i=0;i<numsSize;i++){
            if(j!=0){
                if(!nums[i]){
                j++;
                continue;
                }
                else
                {
                    cnt+=(j*(j+1))/2;
                    j=0;
                }
            }
            if(!nums[i]) j++;
    }
    if(j)
    cnt+=(j*(j+1))/2;
    return cnt;
}