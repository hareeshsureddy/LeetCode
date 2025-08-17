/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int i=0,j=numsSize-1;
    *returnSize=numsSize;
    while(i<j){
        while(i<j && !(nums[i]%2)) i++;
        while(j>i && (nums[j]%2)) j--;
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    return nums;
}