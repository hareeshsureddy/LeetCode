/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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
}