/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize=numsSize;
    if(!k) return nums;
    int *result=(int*)malloc(numsSize*sizeof(int));
    memset(result,-1,sizeof(int)*numsSize);
    if(numsSize<(2*k+1)) return result;
    long long PrefixSum=0;
    const int divisor=(k*2+1);
    int right=(k*2);
    int left=0;
    int i=k;
    for(int j=left;j<numsSize && j<=right;j++){
    PrefixSum+=nums[j];
    }
    result[i++]=PrefixSum/divisor; 
    right++; 
    while(right<numsSize){ 
        PrefixSum=PrefixSum-nums[left]+nums[right];
        result[i++]=PrefixSum/divisor;
        left++;
        right++;
    }
    return result;
}

 /*
int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    int *result=(int*)calloc(numsSize,sizeof(int));
    *returnSize=numsSize;
    bool status=false;
    long long PrefixSum=0;
    const int divisor=(k*2+1);
    for(int i=0;i<numsSize;i++){
        if(i-k>=0 && i+k<numsSize){
            if(status){
            PrefixSum=PrefixSum-nums[i-k-1]+nums[i+k];
            result[i]=PrefixSum/divisor;
            }
            else{
                for(int j=i-k;j<=i+k;j++)
                PrefixSum+=nums[j];
                result[i]=PrefixSum/divisor;
                status=true;
            }
        }else
        result[i]=-1;
    }
    return result;
} */
 /*
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
} */