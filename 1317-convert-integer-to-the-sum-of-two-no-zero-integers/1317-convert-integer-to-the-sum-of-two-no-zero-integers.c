/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*2);
    *returnSize=2;
    for(int i=1;i<n;i++){
        int a=i;
        int b=n-i;
        while(a){
            if((a%10)==0) break;
            a/=10;
        }
        while(b){
            if((b%10)==0) break;
            b/=10;
        }
        if(!(a || b))
        {
        res[0]=i;
        res[1]=n-i;
        break;
        }
    }
    /*
        res[0]=n>>1;
        if(n%2)
        res[1]=res[0]+1;
        else
        res[1]=res[0];
    */
        return res;
}