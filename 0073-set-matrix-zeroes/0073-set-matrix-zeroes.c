void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    bool FirstRow=false,FirstColom=false;
    for( int i=0;i<matrixSize;i++){
        if(!matrix[i][0]) {
        FirstColom=true;
        break;
        }
    }
    for( int i=0;i<(*matrixColSize);i++){
        if(!matrix[0][i])  {
            FirstRow=true;
            break;
        }
    }
    //Mark first row and first colom
    for (int i=1;i<matrixSize;i++){
     for( int j=1;j<(*matrixColSize);j++){
        if(!matrix[i][j]){
            matrix[0][j]=0;
            matrix[i][0]=0;
        }
     }
    }
    //Set array based on first row and first colom
    for (int i=1;i<matrixSize;i++){
     for( int j=1;j<(*matrixColSize);j++){
        if(matrix[i][j]){
           if(!matrix[0][j] || !matrix[i][0] )
                matrix[i][j]=0;
        }
     }
    }
    //corner case handling
    if(FirstRow){
        for( int i=0;i<(*matrixColSize);i++)
        matrix[0][i]=0;
    }
    if(FirstColom)
        for( int i=0;i<matrixSize;i++){
        matrix[i][0]=0;
    }
}