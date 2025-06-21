int maxProduct(int* nums, int numsSize) {
    int prefix=1,suffix=1,maxProduct=0x80000000;
    for(int i=0;i<numsSize;i++){
        if(!suffix) suffix=1;
        if(!prefix) prefix=1;
        prefix*=nums[i];
        suffix*=nums[numsSize-i-1];
        maxProduct=fmax(maxProduct,fmax(prefix,suffix));
    }
    return maxProduct;
    /*
    int max=1,min=1,maxProduct=0x80000000;
    int numsMax=0x80000000;
    for(int i=0;i<numsSize;i++){
        if(numsMax<nums[i]) numsMax=nums[i];
      if(nums[i]==0){
        min=1;
        max=1;
        continue;         
         }
         int temp=nums[i]*max;
         max=fmax(min*nums[i],fmax(temp,nums[i]));
         min=fmin(min*nums[i],fmin(temp,nums[i]));
         maxProduct=fmax(maxProduct,max);
     }
     return fmax(numsMax,maxProduct); */
}