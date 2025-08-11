/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #define MOD107 (1000000007)
int* productQueries(int n, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int *powers=(int*)malloc(sizeof(int)*32);
    int i=0,index=0;
    while(n){
        if(n&1)
        powers[index++]=pow(2,i);
        i++;
        n>>=1;
    }
    int *res=(int*)malloc(sizeof(int)*queriesSize);
    for(int i=0;i<queriesSize;i++){
        long long int productof=1;
        for(int j=queries[i][0];j<=queries[i][1];j++){
            productof=(productof*powers[j])%MOD107;
        }
        res[i]=productof%MOD107;
    }
    *returnSize=queriesSize;
    return res;
}