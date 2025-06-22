/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    //Approach-1 T.C O(n^2) & S.C O(n)
 /*   int *result=(int*)malloc(numsSize*sizeof(int));
    for (int i=0;i<numsSize;i++){
        result[i]=1;
        for(int j=0;j<numsSize;j++){
            if(j==i) continue;
            result[i]*=nums[j];
            if(!result[i]) break;
        }
    }
    *returnSize=numsSize;
    return result; 
*/
        //Approach-2 T.C O(n) & S.C O(1)
        int zeroFcnt=0;
        int TotalProduct=1;
        for (int i=0;i<numsSize;i++){
                if(nums[i])
                TotalProduct*=nums[i];
                else
                zeroFcnt++;
        }
        if(zeroFcnt){
            if(zeroFcnt<2){
        for (int i=0;i<numsSize;i++){
           if(!nums[i])
            nums[i]=TotalProduct;
            else
            nums[i]=0;
        }
            }
            else
                memset(nums,0,sizeof(nums[0])*numsSize);
        }else{
        for (int i=0;i<numsSize;i++){
            nums[i]=TotalProduct/nums[i];
        }
        }
            *returnSize=numsSize;
            return nums;
}