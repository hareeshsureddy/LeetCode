/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int *res=(int*)malloc(sizeof(int)*2);
    *returnSize=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            res[*returnSize]=nums[i];
            (*returnSize)++;
            if(*returnSize==2)
            return res;
        }
    }
    return 0;
}