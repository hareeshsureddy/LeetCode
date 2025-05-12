//2094. Finding 3-Digit Even Numbers
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
            quickSort(nums,start,pi-1);
            quickSort(nums,pi+1,end);
        }
}
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int *result=(int*)malloc(720*sizeof(int));
    int index=0;
    *returnSize=0;
    for( int i=0;i<digitsSize;i++){
        for( int j=0;j<digitsSize;j++){
            for( int k=0;k<digitsSize;k++){
                if(i==k||k==j||j==i)
                continue;
                int num=digits[i]*100+digits[j]*10+digits[k];
                if(num>=100 && (!(num&1)))
                {
                    int l=0;
                for( ;l<index;l++){
                    if(num==result[l]) break;
                }
                    if(l==index){
                    result[index++]=num;
                    }
                }
            }
        }
    }
    if(!index) return result;
    quickSort(result,0,index-1);
    /*
    int i=0;
    for( int j=0;j<index;j++){
        if(result[i]==result[j])
        continue;
        i++;
        result[i]=result[j];
    } */
    /*
        *returnSize=index;
    return result;
} */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
     int *result=(int*)malloc(720*sizeof(int));
    int index=0;
    *returnSize=0;
    int map[10]={0};
    for (int i=0;i<digitsSize;i++){
        map[digits[i]]++;
    }
    for (int i=1;i<=9;i++){
        if (map[i]==0) continue;
        map[i]--;
        for (int j=0;j<=9;j++){
            if (map[j]==0) continue;
            map[j]--;
            for (int k=0;k<=8;k+=2){
                if (map[k]==0) continue;
                map[k]--;
                result[index++]=100*i+10*j+k;
                map[k]++;
            }
            map[j]++;
        }
        map[i]++;
    }   
    *returnSize=index;
    return result;
}