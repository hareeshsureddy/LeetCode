int sumFourDivisors(int* nums, int numsSize) {
    int sumFourDivisors=0;
    for(int i=0;i<numsSize;i++){
        int len=nums[i]>>1;
        int sum=0,cnt=0;
        for(int j=2;j<=len;j++){
            if(nums[i]%j==0){
                sum+=j;
                cnt++;
            }
            if(cnt>2) break;
        }
        if(cnt==2){
            sumFourDivisors+=sum+1+nums[i];
        }
    }
    return sumFourDivisors;
}