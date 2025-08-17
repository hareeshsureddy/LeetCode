/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int i=0;
    while(i<numsSize){
        while(i<numsSize && ( (nums[i]&1 && i&1) || (!(nums[i]&1) && !(i&1)) ) ) i++;
        int j=numsSize-1;
        if(j>i){
            if(i&1){
                while(j>i){
                if ((nums[j]&1) && !(j&1))
                break;
                else
                j--;
                }
            }else{
                while(j>i){
                if (!(nums[j]&1) && (j&1))
                break;
                else
                j--;
                }
            }
            if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            }
        }
    }
    *returnSize=numsSize;
    return nums;
}
/* int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int i=0,j=numsSize-1;
    *returnSize=numsSize;
    while(i<j){
        while(i<j && ((!(i%2) && !(nums[i]%2)) || ((i%2) && (nums[i]%2)))) i++;
        while(j>i && ((!(j%2) && !(nums[j]%2)) || ((j%2) && (nums[j]%2)))) j--;
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    return nums;
} */