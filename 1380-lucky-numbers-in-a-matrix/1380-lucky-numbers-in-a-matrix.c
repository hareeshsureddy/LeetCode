/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *rowMax=(int*)malloc(sizeof(int)*matrixSize);
    int *colMax=(int*)malloc(sizeof(int)* (*matrixColSize));
    *returnSize=0;
    for (int i=0;i<matrixSize;i++){
        int min=matrix[i][0];
        for (int j=1;j<*matrixColSize;j++){
            if(min>matrix[i][j])
             min=matrix[i][j];
        }
        rowMax[i]=min;
    }

    for (int i=0;i<*matrixColSize;i++){
        int max=matrix[0][i];
        for (int j=1;j<matrixSize;j++){
            if(max<matrix[j][i])
             max=matrix[j][i];
        }
        colMax[i]=max;
    }
    int i,j;
     for ( i=0;i<matrixSize;i++){
        for ( j=0;j<*matrixColSize;j++){
            if(rowMax[i]==colMax[j]){
                rowMax[0]=rowMax[i];
                *returnSize=1;
                break;
            }
        }
        if(j!=*matrixColSize)
        break;
    }
    return rowMax;
}