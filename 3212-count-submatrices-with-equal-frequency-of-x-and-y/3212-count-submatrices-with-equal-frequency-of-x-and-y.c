int numberOfSubmatrices(char** grid, int gridSize, int* gridColSize) {
/*    int **res=(in**)malloc(sizeof(int*)*gridSize);
    for(int i=0;i<gridSize;i++){
        res[i]=(int*)malloc(sizeof(int)*gridColSize[0]);
    }
*/
int *xColoum=(int*)calloc(sizeof(int),gridColSize[0]);
int *yColoum=(int*)calloc(sizeof(int),gridColSize[0]);
    int numberOfSubmatrices=0;
    for(int i=0;i<gridSize;i++){
        int x=0,y=0;
        for(int j=0;j<gridColSize[0];j++){
            if(grid[i][j]=='X'){
                xColoum[j]++;
            }else if(grid[i][j]=='Y'){
                yColoum[j]++;
            }
            x+=xColoum[j];
            y+=yColoum[j];
            if(x==y && x)
            numberOfSubmatrices++;
        }
    }
    return numberOfSubmatrices;
}