/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    uint8_t map[ASize+1];
    memset(map,0,sizeof(map));
    int *res=(int*)malloc(sizeof(int)*(ASize));
    int prefSum=0;
    for(int i=0;i<ASize;i++){
        if(++map[A[i]]==2) prefSum++;
        if(++map[B[i]]==2) prefSum++;
        res[i]=prefSum;
    }
    *returnSize=ASize;
    return res;
}