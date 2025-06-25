/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
        int *result=(int*)calloc(numsSize,sizeof(int));
        int index=0;
        for (int j=0;j<numsSize;j++){
            if(nums[j]!=key) continue;
            int start=fmax(0,(j-k));
            int end=fmin(numsSize-1,(j+k));
            if(index>0)
            start=(start<=result[index-1])?result[index-1]+1:start;
            end=(end>=numsSize-1)?numsSize-1:end;
            while(start<=end){
                result[index++]=start++;
            }
        }
        *returnSize=index;
        return result;
 }
 /*
int max(int a, int b){
    if(a>=b) return a;
    return b;
}

int min(int a, int b){
    if(a<=b) return a;
    return b;
}

int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    int *arr = malloc(sizeof(int)*numsSize);
    int index = 0;

    for(int i=0; i<numsSize; i++){
        if(nums[i] == key){
            int j=max(0, i-k);
            if(index != 0){
                j=max(j, arr[index-1]+1);
            }
            for(; j<=min(i+k, numsSize-1); j++){
                arr[index++] = j;
            }
        }
    }
    *returnSize = index;
    return arr;
}   */