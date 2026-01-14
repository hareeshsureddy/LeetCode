int matrixScore(int** grid, int gridSize, int* gridColSize) {
    int *colCnt=(int*)calloc(sizeof(int),gridColSize[0]);
    for(int i=0;i<gridSize;i++){
        if(!grid[i][0]){
            for(int j=0;j<gridColSize[0];j++){
                if(grid[i][j])
                    grid[i][j]=0;
                else{
                    grid[i][j]=1;
                    colCnt[j]++;
                }
            }
        }else{
            for(int j=0;j<gridColSize[0];j++){
                if(grid[i][j]){
                    colCnt[j]++;
                }
            }
        }
    }
    for(int j=0;j<gridColSize[0];j++){
        if(colCnt[j]<((gridSize+1)>>1)){
            for(int i=0;i<gridSize;i++){
                grid[i][j]=(grid[i][j])?0:1;
            }
        }
    }
    int matrixScore=0;
    for(int i=0;i<gridSize;i++){
        int rowSum=0;
        for(int j=0;j<gridColSize[0];j++){
           // printf("%d ",grid[i][j]);
            if(grid[i][j]){
               rowSum|= (1<<(gridColSize[0]-1-j));
            }
        }
       // printf("\n rowSum= %d \n",rowSum);
        matrixScore+=rowSum;
    }
    return matrixScore;
}