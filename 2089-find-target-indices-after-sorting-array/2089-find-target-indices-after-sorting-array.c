/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int len=10;
    int idx=0;
    int *res=(int*)malloc(sizeof(int)*len);
    for(int i=0;i<numsSize;i++){
        if(target==nums[i]){
            if(len<=idx){
                len*=2;
                res=(int*)realloc(res,sizeof(int)*len);
            }
            res[idx++]=i;
        }
    }
    *returnSize=idx;
    return res;
}