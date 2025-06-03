void rotate(int* nums, int numsSize, int k) {
    int j=k%numsSize;
    int i=0;
    if(j){
        if((j==(numsSize)/2) && !(numsSize&1)){
        while(j<numsSize){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j++;
        }
      }else{
        j=numsSize-j;
        int *result=(int*)malloc(sizeof(int)*numsSize);
        while(j<numsSize){
            result[i++]=nums[j++];
        }
        j=0;
        while(i<numsSize){
            result[i++]=nums[j++];
        }
        for (i=0;i<numsSize;i++){
        nums[i]=result[i];
        }
      }
    }
}