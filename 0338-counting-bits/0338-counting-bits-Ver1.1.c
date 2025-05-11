/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize=n+1;
    int *Result=(int*)malloc((*returnSize)*sizeof(int));
    Result[0]=0;
        for (int i=1;i<(*returnSize);i++){
            if(i&1)
            Result[i]=Result[i>>1]+1;
            else
            Result[i]=Result[i>>1];
        }
    /*
    for (int i=1;i<(*returnSize);i++){
        int num=i,SetCnt=0;
        while(num){
            num&=(num-1);
            SetCnt++;
        }
        Result[i]=SetCnt;
    } */
    return Result;
}