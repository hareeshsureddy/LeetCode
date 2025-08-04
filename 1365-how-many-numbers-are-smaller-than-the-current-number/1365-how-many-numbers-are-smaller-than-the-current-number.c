/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int map[101]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    for(int i=0;i<numsSize;i++){
        int cnt=0;
        for(int j=0;j<nums[i];j++){
            cnt+=map[j];
        }
        nums[i]=cnt;
    }
    *returnSize=numsSize;
    return nums;
}