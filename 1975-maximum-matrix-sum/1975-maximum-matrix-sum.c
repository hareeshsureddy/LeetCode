long long maxMatrixSum(int** matrix, int matrixSize, int* matrixColSize) {
    long long maxMatrixSum=0;
    int cnt=0;
    int min=INT_MAX;
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            if(matrix[i][j]<0)
            cnt++;
            maxMatrixSum+=abs(matrix[i][j]);
            if(min>abs(matrix[i][j]))
            min=abs(matrix[i][j]);
        }
    }
    if(cnt&1){
        maxMatrixSum-=(2*min);
    }
    return maxMatrixSum;
}