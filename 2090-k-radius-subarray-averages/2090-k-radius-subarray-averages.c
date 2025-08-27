/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    long long *res=(long long*)calloc(numsSize,sizeof(long long));
        int *result=(int*)calloc(numsSize,sizeof(int));
    *returnSize=numsSize;
    bool status=false;
    for(int i=0;i<numsSize;i++){
        if(i-k>=0 && i+k<numsSize){
            if(status)
            res[i]=res[i-1]-nums[i-k-1]+nums[i+k];
            else{
                for(int j=i-k;j<=i+k;j++)
                res[i]+=nums[j];
                status=true;
            }
        }else
        result[i]=-1;
    }
        for(int i=0;i<numsSize;i++){
        if(res[i]>0)
        result[i]=res[i]/(k*2+1);
    }
    return result;
}