/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
  int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int e=0,o=1;
    while(e<numsSize && o<numsSize){
        if(nums[e]%2==0) e+=2;
        else if(nums[o]%2) o+=2;
        else{
            int temp=nums[e];
            nums[e]=nums[o];
            nums[o]=temp;
            o+=2;
            e+=2;
        }
    }
    *returnSize=numsSize;
    return nums;
}
 /*
 int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    int e=0,o=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            res[e]=nums[i];
            e+=2;
        }else{
        res[o]=nums[i];
        o+=2;
        }
    }
    *returnSize=numsSize;
    return res;
}*/
/*
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
}*/