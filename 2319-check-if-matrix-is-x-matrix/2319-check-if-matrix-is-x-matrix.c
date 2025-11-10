bool checkXMatrix(int** grid, int gridSize, int* gridColSize) {
    for(int i=0;i<gridSize;i++){
        if(grid[i][i]==0) return false;
        grid[i][i]=-1;
    }
    for(int i=0;i<gridSize;i++){
        if(grid[i][gridSize-1-i]==0)return false;
         grid[i][gridSize-1-i]=-1;
    }
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridSize;j++){
            if(grid[i][j]>0) return false;
        }
    }
    return true;
}