/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        int num=nums[i];
        for(int j=1;j<30;j++){
            if(!((num>>j)&1)){
                num&=~(1<<(j-1));
                res[i]=num;
                break;
            }
        }
        if(!res[i]) res[i]=-1;
    }
    return res;
 }
 /*
int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)calloc(numsSize,sizeof(int));
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        int num=nums[i];
        for(int j=0;j<num;j++){
            if((j|(j+1))==num){
                res[i]=j;
                break;
            }
        }
        if(!res[i]) res[i]=-1;
    }
    return res;
}*/