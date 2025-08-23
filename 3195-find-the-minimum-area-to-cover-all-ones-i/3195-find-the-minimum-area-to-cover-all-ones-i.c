int minimumArea(int** grid, int gridSize, int* gridColSize) {
        int maxRow=0,minRow=INT_MAX,maxCol=0,minCol=INT_MAX;
        for (int i=0;i<gridSize;i++){
            for(int j=0;j<*gridColSize;j++){
                if(grid[i][j]){
                    maxRow=(maxRow<i)?i:maxRow;
                    maxCol=(maxCol<j)?j:maxCol;
                    minRow=(minRow>i)?i:minRow;
                    minCol=(minCol>j)?j:minCol;
                    /*
                    maxRow=fmax(maxRow,i);
                    maxCol=fmax(maxCol,j);
                    minRow=fmin(minRow,i);
                    minCol=fmin(minCol,j);
                    */
                }
            }
        }
        return (maxRow-minRow+1)*(maxCol-minCol+1);
}

//271 / 712 testcases
/*
int minimumArea(int** grid, int gridSize, int* gridColSize) {
    int R=0,C=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<*gridColSize;j++){
            if(grid[i][j]){
                R++;
                break;
            }
        }
    }
    for(int i=0;i<*gridColSize;i++){
        for(int j=0;j<gridSize;j++){
            if(grid[j][i]){
                 C++;
                break;
            }
        }
    }
    return R*C;
}*/