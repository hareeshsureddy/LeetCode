int minimumAverageDifference(int* nums, int numsSize) {
    long long sum=0,presum; 
    for(int i=0;i<numsSize;i++) sum+=nums[i];
   int min=INT_MAX;
   presum=sum;
   int idx=0;
   long long a=0;
    for(int i=0;i<numsSize-1;i++){
        a+=nums[i];
        sum-=nums[i];
        long long b=sum/(numsSize-1-i);
        long long c=abs((a/(i+1))-b);
        if(c<min){
            min=c;
            idx=i;
        }
    }
    if((presum/numsSize)<min) idx=numsSize-1;
    return idx;
}