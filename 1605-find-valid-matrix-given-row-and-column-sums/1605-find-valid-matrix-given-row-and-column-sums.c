/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** restoreMatrix(int* rowSum, int rowSumSize, int* colSum, int colSumSize, int* returnSize, int** returnColumnSizes) {
    int **restoreMatrix=(int**)malloc(sizeof(int*)*rowSumSize);
    for(int i=0;i<rowSumSize;i++){
        restoreMatrix[i]=(int*)calloc(sizeof(int),colSumSize);
    }
    int i=0,j=0;
    while(i<rowSumSize && j <colSumSize){
        if(rowSum[i]<colSum[j]){
        restoreMatrix[i][j]=rowSum[i];
        colSum[j]-=rowSum[i];
        i++;
        }else{
        restoreMatrix[i][j]=colSum[j];
        rowSum[i]-=colSum[j];
        j++;            
        }
    }
    *returnSize=rowSumSize;
    int *coloumSize=(int*)malloc(sizeof(int)*colSumSize);
    for(int i=0;i<rowSumSize;i++)
    coloumSize[i]=colSumSize;
    *returnColumnSizes=coloumSize;
    return restoreMatrix;
}