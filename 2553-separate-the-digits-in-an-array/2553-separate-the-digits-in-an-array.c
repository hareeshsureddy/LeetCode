/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int len=10;
    int *res=(int*)malloc(sizeof(int)*len);
    int idx=0;
    for(int i=numsSize-1;i>=0;i--){
        int num=nums[i];
        while(num){
            if(idx>=len){
                len*=2;
                res=(int*)realloc(res,sizeof(int)*len);
            }
            res[idx++]=num%10;
            num/=10;
        }
    }
    int i=0,j=idx-1;
    while(i<j){
        int temp=res[i];
        res[i]=res[j];
        res[j]=temp;
        i++;
        j--;
    }
    *returnSize=idx;
    return res;
}