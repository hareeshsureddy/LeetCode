/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
 }
int** divideArray(int* nums, int numsSize, int k, int* returnSize, int** returnColumnSizes) {
    qsort(nums,numsSize,sizeof(int),compare);
    *returnSize=numsSize/3;
    int index=0;
    int** result=(int**)malloc(sizeof(int*)*(numsSize/3));
    *returnColumnSizes=(int*)malloc(*returnSize*sizeof(int));
    for (int i=0;i<numsSize;i+=3){
        if((nums[i+2]-nums[i])>k){
            *returnSize=0;
            return NULL;
        }
    }
    for(int i=0;i<numsSize;i+=3){
            (*returnColumnSizes)[index]=3;
            result[index]=(int*)malloc(3*sizeof(int));
            result[index][0]=nums[i];
            result[index][1]=nums[i+1];
            result[index++][2]=nums[i+2];
        }
    return result;
}