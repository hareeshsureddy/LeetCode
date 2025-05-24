/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*quick sort*/
int partition(int *org,int *nums,int start,int end){
    int pivot=nums[start];
    int pivot1=org[start];
    int i=start;
    int j=end;
    while(i<j){
        while(nums[i]>=pivot && i<end){
            i++;
        }
        while(nums[j]<pivot && j>start){
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
/*
void insertionSort(int *nums,int *map,int len){
    for (int i=0;i<len-1;i++){
        int index=i;
        for (int k=i+1;k<len;k++){
            if( nums[k]>nums[index])
                index=k;
        }
        int temp=nums[i];
        int temp1=map[i];
        nums[i]=nums[index];
        map[i]=map[index];
        nums[index]=temp;
        map[index]=temp1;
    }
} */
char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    char **result=(char**)calloc(scoreSize,sizeof(char**));
    int map[scoreSize];
    for (int i=0;i<scoreSize;i++){
    result[i]=(char*)calloc(13,sizeof(char));
    map[i]=i;
    }
    *returnSize=scoreSize;
/*  insertionSort(score,map,scoreSize); */
    quickSort(map,score,0,scoreSize-1);
    for(int i=0;i<scoreSize;i++){
        switch(i){
            case 0:
            result[map[i]]="Gold Medal";
            break;
            case 1:
            result[map[i]]="Silver Medal";
            break;
            case 2:
            result[map[i]]="Bronze Medal";
            break;
            default:
            sprintf(result[map[i]],"%d",(1+i));
            break;
        }
    }
    return result;
}