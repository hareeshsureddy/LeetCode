/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int XOR1 = 0;
    if (numsSize % 4 == 1)
        XOR1 = 1;
    else if (numsSize % 4 == 2)
        XOR1 = numsSize + 1;
    else if (numsSize % 4 == 0)
        XOR1 = numsSize;
    int XOR2 = 0;
    for (int i = 0; i < numsSize; i++)
        XOR2 ^= nums[i];
    XOR1 ^= XOR2;
    int mask = (-XOR1) & XOR1;
    int num1 = 0;
    for (int i = 0; i < numsSize; i++) {
        if (mask & (i + 1))
            num1 = num1 ^ (i + 1);
        if (mask & (nums[i]))
            num1 = num1 ^ nums[i];
    }
    int* res = (int*)malloc(sizeof(int) * 2);
        *returnSize = 2;
    int num2 = XOR1 ^ num1;
    for(int i=0;i<numsSize;i++){
        if(num1==nums[i]){
            res[0]=num1;
            res[1]=num2;
            return res;
        }
    }
            res[0]=num2;
            res[1]=num1;
    return res;
}  */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int num1,num2,idx;
    for (int i = 0; i < numsSize; i++) {
         idx=abs(nums[i]);
        if(nums[idx-1]<0) num1=idx;
        else
        nums[idx-1]*=-1;
    }
    for (int i = 0; i < numsSize; i++) {
        if(nums[i]>0) num2=i+1;
    }
    int* res = (int*)malloc(sizeof(int) * 2);
        *returnSize = 2;
        res[0]=num1;
        res[1]=num2;
    return res;
}