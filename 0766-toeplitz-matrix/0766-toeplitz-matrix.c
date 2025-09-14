bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i=0;i<matrixSize-1;i++){
        int j=0;
        int k=i;
        while(k<matrixSize-1 && j<*matrixColSize-1){
        if(matrix[k][j]!=matrix[k+1][j+1]) return false;
        k++;
        j++;
        }
    }
    for(int i=1;i<*matrixColSize;i++){
        int j=i;
        int k=0;
        while(k<matrixSize-1 && j<*matrixColSize-1){
        if(matrix[k][j]!=matrix[k+1][j+1]) return false;
        k++;
        j++;
        }
    }
    return true;
}