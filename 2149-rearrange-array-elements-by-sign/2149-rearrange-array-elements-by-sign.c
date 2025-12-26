/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize);
    int Pv=0,Nv=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
        res[Nv]=nums[i];
        Nv+=2;
        }
        else{
        res[Pv]=nums[i];
        Pv+=2;
        }
    }
    *returnSize=numsSize;
    return res;
}