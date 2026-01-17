bool checkValid(int** matrix, int matrixSize, int* matrixColSize) {
    bool *map=(bool*)calloc(sizeof(bool),matrixSize);
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
        if(map[matrix[i][j]-1]) return false;
            map[matrix[i][j]-1]=true;
        }
        memset(map,false,sizeof(bool)*matrixSize);
    }
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
        if(map[matrix[j][i]-1]) return false;
            map[matrix[j][i]-1]=true;
        }
        memset(map,false,sizeof(bool)*matrixSize);
    }
    return true;
}