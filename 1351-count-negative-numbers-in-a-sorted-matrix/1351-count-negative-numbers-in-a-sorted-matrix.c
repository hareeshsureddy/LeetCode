int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int cnt = 0;
    //O(m+n)
    int r=gridSize-1;
    int c=0;
    while(r>=0 && c<*gridColSize){
        if(grid[r][c]<0){
            cnt+=(*gridColSize-c);
            r--;
        }else{
            c++;
        }
    }
    // O(m*n)
    /*
    for(int j=0;j<gridSize;j++){
    for(int i=*gridColSize-1;i>=0;i--){
        if(grid[j][i]<0) cnt++;
        else
        break;
    }
    }*/
    return cnt;
}