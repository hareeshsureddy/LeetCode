/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 typedef struct {
    int score;
    int idx;
 }KthExame;
 int compare(const void *a,const void *b){
    return ((KthExame*)b)->score-((KthExame*)a)->score;
 }

int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes) {
    *returnColumnSizes=scoreColSize;
    *returnSize=scoreSize;
    int **sortTheStudents=(int**)malloc(sizeof(int*)*scoreSize);
    KthExame map[scoreSize];
    for(int i=0;i<scoreSize;i++){
        map[i].score=score[i][k];
        map[i].idx=i;
    }
    qsort(map,scoreSize,sizeof(KthExame),compare);
    for(int i=0;i<scoreSize;i++){
        sortTheStudents[i]=score[map[i].idx];
    }
    return sortTheStudents;
}