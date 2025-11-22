int minimumOperations(int* nums, int numsSize) {
    int res=0;
  for(int i=0;i<numsSize;i++){
        if(nums[i]%3) res++;
  }  
  return res;
}