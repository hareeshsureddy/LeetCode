/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int len=0;
    if(k<10)
    len=1;
    else if(k>9 && k<100)
    len=2;
    else if(k>99 && k<1000)
    len=3;
    else if(k>999 && k<10000)
    len=4;
    else
    len=5;
    len=(numSize>len)?numSize+1:len+1;
    int *res=(int*)malloc(sizeof(int)*(len));
    int carry=0;
    int idx=len;
    for(int i=numSize-1;i>=0;i--){
        int sum=num[i]+(k%10)+carry;
        res[--idx]=sum%10;
        carry=sum/10;
        k/=10;
    }
    while(k){
        int sum=(k%10)+carry;
        res[--idx]=sum%10;
        carry=sum/10;
        k/=10;
    }
    if(carry){
    res[0]=carry;
    *returnSize=len;
    return res;
    }
    else
    *returnSize=len-1;
    return res+1;
}