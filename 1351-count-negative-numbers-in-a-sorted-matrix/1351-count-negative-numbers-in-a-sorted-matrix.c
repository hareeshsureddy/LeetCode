int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int cnt=0;
    for(int j=0;j<gridSize;j++){
    for(int i=*gridColSize-1;i>=0;i--){
        if(grid[j][i]<0) cnt++;
        else
        break;
    }
    }
    return cnt;
}