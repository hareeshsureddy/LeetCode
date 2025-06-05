int jump(int* nums, int numsSize) {
    int l=0,r=0,jumps=0;
    while(r<numsSize-1){
        int far=0;
        for (int i=l;i<=r;i++){
            far=fmax(far,i+nums[i]);
        }
        l=r+1;
        r=far;
        jumps++;
    }
    return jumps;
}