/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int map[101]={0};
    *returnSize=0;
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
        if(map[nums[i]]>1){
            nums[(*returnSize)++]=nums[i];
            if(*returnSize==2) return nums;
        } 
    }
    return nums;
}