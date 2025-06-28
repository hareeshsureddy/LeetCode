/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
void bubbleSort_index(int *nums, int numsSize, int *actualIndex){
    for (int i=0;i<numsSize-1;i++){
        for (int j=0;j<numsSize-i-1;j++){
            if(nums[j]<nums[j+1]){
                int temp=nums[j];
                int temp1=actualIndex[j];
                nums[j]=nums[j+1];
                actualIndex[j]=actualIndex[j+1];
                nums[j+1]=temp;
                actualIndex[j+1]=temp1;
            }
        }
    }
}
void bubbleSort(int *nums, int numsSize){
    for (int i=0;i<numsSize-1;i++){
        for (int j=0;j<numsSize-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}
int* maxSubsequence(int* nums, int numsSize, int k, int* returnSize) {
    int *sortNums=(int*)malloc(numsSize*sizeof(int));
    int *actualIndex=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    actualIndex[i]=i;
    memcpy(sortNums,nums,numsSize*sizeof(int));
    bubbleSort_index(sortNums,numsSize,actualIndex);
    bubbleSort(actualIndex,k);
    for(int i=0;i<k;i++)
    sortNums[i]=nums[actualIndex[i]];
    *returnSize=k;
    return sortNums;
} */
typedef struct{
    int index;
    int value;
}data_t;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 typedef struct{
    int index;
    int value;
}data_t;
 */
 int sortValueDec(const void *a, const void *b){
        return ((data_t*)b)->value - ((data_t*)a)->value;
 }
int sortIndexAsc(const void *a, const void *b){
        return (((data_t*)a)->index-((data_t*)b)->index);
 }
int* maxSubsequence(int* nums, int numsSize, int k, int* returnSize) {
    data_t *values=(data_t*)malloc(sizeof(data_t)*numsSize);
    for (int i=0;i<numsSize;i++){
        values[i].index=i;
        values[i].value=nums[i];
    }
    qsort(values,numsSize,sizeof(data_t),sortValueDec);
    qsort(values,k,sizeof(data_t),sortIndexAsc);
    int *sortNums=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<k;i++){
        sortNums[i]=values[i].value;
    }
        *returnSize=k;
    return sortNums;
}