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
    /*
        for (int i=0;i<codeSize;i++){
            int sum=0;
                for (int j=1;j<=abs(k);j++){
                    if (k>0)
                    sum+=code[(i+j)%codeSize];
                    else
                    sum+=code[(i+codeSize-j)%codeSize];
                }
        result[i]=sum;
        }
        */
        int i,j;
    if(k>0){
        for(i=1;i<=k;i++){
        result[0]+=code[i];
        }
        for(i=1;i<codeSize;i++){
            k++;
            result[i]=result[i-1]+code[k%codeSize]-code[i];
        }
    }else{
      i=codeSize-abs(k);
      j=codeSize-1;
      while(i<=j){
        result[0]+=code[i++];
      }
      j++;
      i=codeSize-abs(k);
      for(int l=1;l<codeSize;l++){
        result[l]=result[l-1]-code[i%codeSize]+code[j%codeSize];
        i++;
        j++;
      }
    }
    return result;
    
}