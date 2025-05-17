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
    quickSort(nums,0,numsSize-1);
}