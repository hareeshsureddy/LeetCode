/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int cnt=0;
    int num=n;
    while(n){
        cnt++;
        n&=(n-1);
    }
    int evenCnt=0;
    while(num){
        if(num&1) evenCnt++;
        num>>=2;
    }
    *returnSize=2;
    int *res=(int*)malloc(sizeof(int)*2);
    res[0]=evenCnt;
    res[1]=cnt-evenCnt;
    return res;
}