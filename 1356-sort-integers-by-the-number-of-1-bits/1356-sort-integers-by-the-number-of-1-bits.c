/*quick sort Org*/
int partition_org(int *nums,int start,int end){
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
void quickSort_org(int *nums,int start,int end){
        if(start<end){
            int pi=partition_org(nums,start,end);
            quickSort_org(nums,start,pi-1);
            quickSort_org(nums,pi+1,end);
        }
}
/*quick sort*/
int partition(int *org,int *nums,int start,int end){
    int pivot=nums[start];
    int pivot1=org[start];
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
            int temp1=org[i];
            nums[i]=nums[j];
            org[i]=org[j];
            nums[j]=temp;
            org[j]=temp1;
        }
    }
            int temp=nums[j];
            int temp1=org[j];
            nums[j]=pivot;
            org[j]=pivot1;
            nums[start]=temp;
            org[start]=temp1;
    return j;
}
void quickSort(int *Org,int *nums,int start,int end){
        if(start<end){
            int pi=partition(Org,nums,start,end);
            quickSort(Org,nums,start,pi-1);
            quickSort(Org,nums,pi+1,end);
        }
}
int* sortByBits(int* arr, int arrSize, int* returnSize) {
    *returnSize=arrSize;
    int *bitCnt=(int*)malloc(arrSize*sizeof(int));
    for (int i=0;i<arrSize;i++){
        int num=arr[i],cnt=0;
        while(num){
            num&=(num-1);
            cnt++;
        }
        bitCnt[i]=cnt;
    }
 quickSort(arr,bitCnt,0,arrSize-1);
 /*
 for (int i=0;i<arrSize-1;i++){
    int start=i;
    int Bit=bitCnt[i];
    while(Bit==bitCnt[++i]){};
    int end=--i;
    quickSort_org(arr,start,end);
 }*/
 for (int i = 0; i < arrSize; i++) {
    int start = i;
    int Bit = bitCnt[i];
    while (i + 1 < arrSize && bitCnt[i + 1] == Bit) {
        i++;
    }
    int end = i;
    quickSort_org(arr, start, end);
}
 return arr;
}