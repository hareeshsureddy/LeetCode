/**
 * Note: The returned array must be malloced, assume caller calls free().
 */ /*
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    int index=0,equPivot=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)
        res[index++]=nums[i];
        else if(nums[i]==pivot) equPivot++;
    }
        for(int i=0;i<equPivot;i++)
        res[index++]=pivot;
        for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot)
        res[index++]=nums[i];
    }
    *returnSize=numsSize;
    return res;
} */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */ /*
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    int index=0,equPivot=0,lessPivot=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)
        lessPivot++;
        else if(nums[i]==pivot) equPivot++;
    }
    equPivot+=lessPivot;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)
        res[index++]=nums[i];
        else if(nums[i]>pivot)
        res[equPivot++]=nums[i];
        else
        res[lessPivot++]=pivot;
    }
    *returnSize=numsSize;
    return res;
} */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */ 
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    int r=0,l=numsSize-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot)
        res[r++]=nums[i];
        if(nums[numsSize-1-i]>pivot) 
        res[l--]=nums[numsSize-1-i];
    }
    while(r<=l){
        res[r++]=pivot;
    }
    *returnSize=numsSize;
    return res;
} 