void reverseArray(int** matrix,int r,int size){
    int i=0,j=size-1;
    while(i<j){
        int temp=matrix[r][i];
        matrix[r][i]=matrix[r][j];
        matrix[r][j]=temp;
        i++;
        j--;
    }
}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    //Transpose
    for(int i=0;i<matrixSize;i++){
        for(int j=i;j<matrixSize;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<matrixSize;i++){
        reverseArray(matrix,i,matrixSize);
    }
}
/*
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int **res=(int**)malloc(sizeof(int*)*matrixSize);
    for(int i=0;i<matrixSize;i++)
        res[i]=(int*)malloc(sizeof(int)*matrixSize);
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            res[j][matrixSize-i-1]=matrix[i][j];
        }
    }
    for(int i=0;i<matrixSize;i++)
        matrix[i]=res[i];
}*/