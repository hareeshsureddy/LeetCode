/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    bool *res=(bool*)malloc(sizeof(bool)*numsSize);
    long long num=0;
    for(int i=0;i<numsSize;i++){
        num=((num<<1)+nums[i])%5;
        if(num)
        res[i]=false;
        else
        res[i]=true;
    }
    *returnSize=numsSize;
    return res;
}