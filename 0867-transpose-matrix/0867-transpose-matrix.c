/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 /*
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    *returnSize=*matrixColSize;
    *returnColumnSizes=matrixSize;
    int **transposeArray=(int**)malloc(matrixSize*sizeof(int*));
    for (int i=0;i<matrixSize;i++){
        transposeArray[i]=(int*)malloc((*matrixColSize)*sizeof(int));
    }
    for (int i=0;i<matrixSize/(*matrixColSize);i++){
        for (int j=0;j<matrixColSize;j++){
        transposeArray[j][i]=matrix[i][j];
        }
    }
    return transposeArray;
}
*/
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;
    int cols = *matrixColSize;

    *returnSize = cols;  // Transposed matrix has 'cols' rows
    int** result = (int**)malloc(cols * sizeof(int*));
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));

    for (int i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
        (*returnColumnSizes)[i] = rows;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}
