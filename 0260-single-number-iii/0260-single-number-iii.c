/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*quick sort*/
 /*
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
            quickSort(nums,0,pi-1);
            quickSort(nums,pi+1,end);
        }
}
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    quickSort(nums,0,numsSize-1);
    *returnSize=2;
        int *result=malloc(2*sizeof(int));
    int k=0;
    for (int i=0;i<numsSize-1;i++){
        if(nums[i]!=nums[i+1]){
            result[k++]=nums[i];
            i--;
        }
        i++;
    }
    if(k<2) result[k]=nums[numsSize-1];
    return result;
}*/

int* singleNumber(int* nums, int numsSize, int* returnSize) {
      *returnSize=2;
    int *result=malloc(2*sizeof(int)); 
    unsigned int xor=0,result1=0,result2=0;
    for (int i=0;i<numsSize;i++){
        xor^=nums[i];
    }
    xor&=(-xor);
    for (int i=0;i<numsSize;i++){
        if(nums[i]&xor)
        result1^=nums[i];
        else
        result2^=nums[i];
    }
    result[0]=result1;
    result[1]=result2;
    return result;
}