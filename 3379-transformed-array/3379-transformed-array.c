/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructTransformedArray(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0){
            res[i]=nums[(i+nums[i])%numsSize];
        }else if( nums[i]<0){
            res[i]=nums[(i+(numsSize-abs(nums[i])))%numsSize];
        }else{
            res[i]=nums[i];
        }
    }
    return res;
}