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
void sortColors(int* nums, int numsSize) {
   /*Approach-1*/
   // quickSort(nums,0,numsSize-1);
   /*Approach-2*/
   uint16_t cnt[3]={0};
   for (uint16_t i=0;i<numsSize;i++){
    if(nums[i]){
        if(nums[i]==1)
        cnt[1]++;
        else
        cnt[2]++;
    }
    else
    cnt[0]++;
   }
   uint16_t index=0;
   while(cnt[0]--)
   nums[index++]=0;
    while(cnt[1]--)
   nums[index++]=1;   
   while(cnt[2]--)
   nums[index++]=2;
}