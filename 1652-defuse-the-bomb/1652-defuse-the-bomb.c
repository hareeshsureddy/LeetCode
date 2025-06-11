/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    *returnSize=codeSize;
    if(k==0){
        memset(code,0,codeSize*sizeof(int));
        return code;
    }
    else if(abs(k)==codeSize-1){
        int sum=0;
        for (int i=0;i<codeSize;i++)
        sum+=code[i];
        for (int i=0;i<codeSize;i++)
        code[i]=sum-code[i];
        return code;
    }
    int *result=(int*)calloc(codeSize,sizeof(int));
        for (int i=0;i<codeSize;i++){
            int sum=0;
                for (int j=1;j<=abs(k);j++){
                    if (k>0)
                    sum+=code[(i+j)%codeSize];
                    else
                    sum+=code[(i+codeSize-j)%codeSize];
                }
        result[i]=sum;;
        }
    return result;
}