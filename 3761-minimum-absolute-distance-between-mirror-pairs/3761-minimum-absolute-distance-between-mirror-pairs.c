int reverseNum(int num){
    int res=0;
    while(num){
        res*=10;
        res+=num%10;
        num/=10;
    }
    return res;
}

int minMirrorPairDistance(int* nums, int numsSize) {
    int minMirrorPairDistance=INT_MAX;
    for(int i=0;i<numsSize-1;i++){
        int num=reverseNum(nums[i]);
        for(int j=i+1;j<numsSize;j++){
            if(num==nums[j]){
               minMirrorPairDistance= fmin(minMirrorPairDistance,abs(i-j));
            }
        }
    }
    return (minMirrorPairDistance==INT_MAX)?-1:minMirrorPairDistance;
}