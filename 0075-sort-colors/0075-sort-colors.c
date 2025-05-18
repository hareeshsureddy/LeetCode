/*quick sort*/
int partition(int *nums,int start,int end){
    int pivot=nums[start];
    int i=start;
    int j=end;
    while(i<j){
        while(nums[i]<=pivot && i<end){
            i++;
        }
        while(nums[j]>pivot && j>start){
            j--;
        }
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
            int temp=nums[j];
            nums[j]=pivot;
            nums[start]=temp;
    return j;
}
void quickSort(int *nums,int start,int end){
        if(start<end){
            int pi=partition(nums,start,end);
            quickSort(nums,start,pi-1);
            quickSort(nums,pi+1,end);
        }
}
void swap(int *nums,uint16_t idx1, uint16_t idx2){
        uint16_t temp=nums[idx1];
        nums[idx1]=nums[idx2];
        nums[idx2]=temp;
}
void sortColors(int* nums, int numsSize) {
   /*Approach-1*/
   // quickSort(nums,0,numsSize-1);
   /*Approach-2*/
  /*
   uint16_t cnt[3]={0};
   for (uint16_t i=0;i<numsSize;i++){
    cnt[nums[i]]++;
   }
   uint16_t index=0;
   while(cnt[0]--)
   nums[index++]=0;
    while(cnt[1]--)
   nums[index++]=1;   
   while(cnt[2]--)
   nums[index++]=2;
  */
   /*Approach-3*/
    int16_t i=0,j=0,k=numsSize-1;
    while(j<=k){
        if(nums[j]==0){
            swap(nums,i,j);
            j++;
            i++;
        }else if(nums[j]==2){
            swap(nums,k,j);
            k--;
        }else 
        {j++;}
    }
}