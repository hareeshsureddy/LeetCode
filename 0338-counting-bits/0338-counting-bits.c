/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize=n+1;
    int *Result=(int*)malloc((*returnSize)*sizeof(int));
    for (int i=0;i<(*returnSize);i++){
        int num=i,SetCnt=0;
        while(num){
            num&=(num-1);
            SetCnt++;
        }
        Result[i]=SetCnt;
    }
    return Result;
}