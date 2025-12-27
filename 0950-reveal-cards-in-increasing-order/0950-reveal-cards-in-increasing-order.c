/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
 }
int* deckRevealedIncreasing(int* deck, int deckSize, int* returnSize) {
    int *res=(int*)calloc(sizeof(int),deckSize);
    qsort(deck,deckSize,sizeof(int),compare);
    bool status=true;
    int idx=0;
    int curIdx=0;
    while(idx<deckSize){
        if(status && res[curIdx]==0){
            res[curIdx]=deck[idx++];
            status=false;
        }else if(status==false && res[curIdx]==0){
                status=true;
        }
        curIdx=(curIdx+1)%deckSize;
    }
    *returnSize=deckSize;
    return res;
}