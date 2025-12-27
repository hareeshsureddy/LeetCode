/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** onesMinusZeros(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int *rows=(int*)malloc(sizeof(int)*gridSize);
    int *coloums=(int*)malloc(sizeof(int)*gridColSize[0]);
    for(int i=0;i<gridSize;i++){
        int ones=0;
        for(int j=0;j<gridColSize[0];j++){
            if(grid[i][j]) ones++;
        }
        rows[i]=ones;
    }
    for(int i=0;i<gridColSize[0];i++){
        int ones=0;
        for(int j=0;j<gridSize;j++){
            if(grid[j][i]) ones++;
        }
        coloums[i]=ones;
    }
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[0];j++){
            int rowSum=rows[i]+coloums[j];
            int coloumSum=gridSize-rows[i]+gridColSize[0]-coloums[j];
            grid[i][j]=rowSum-coloumSum;
        }
    }
    *returnSize=gridSize;
    *returnColumnSizes=gridColSize;
    return grid;
}