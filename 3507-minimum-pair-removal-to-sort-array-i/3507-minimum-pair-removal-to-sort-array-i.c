int minimumPairRemoval(int* nums, int numsSize) {
    bool status=true;
    int minimumPairRemoval=0;
    while(status){
        status=false;
        for(int i=1;i<numsSize;i++){
            if(nums[i-1]>nums[i]){
               status=true;
               break; 
            }
        }
        if(status){
            int minSum=INT_MAX;
            int i=0;
            for(int j=1;j<numsSize;j++){
                int sum=nums[j]+nums[j-1];
                if(sum<minSum){
                    i=j-1;
                    minSum=sum;
                }
            }
            nums[i]=nums[i]+nums[i+1];
            for(int j=i+2;j<numsSize;j++){
                nums[j-1]=nums[j];
            }
            numsSize--;
            minimumPairRemoval++;
        }
    }
    return minimumPairRemoval;
}