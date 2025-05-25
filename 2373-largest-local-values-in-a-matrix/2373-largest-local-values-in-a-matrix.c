/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    *returnSize=gridSize-2;
    *returnColumnSizes=(int*)malloc((gridSize-2)*sizeof(int));
    int **maxLocal=(int**)malloc((gridSize-2)*sizeof(int*));
    for( int i=0;i<gridSize-2;i++){
        (*returnColumnSizes)[i]=gridSize-2;
        maxLocal[i]=(int*)malloc((gridSize-2)*sizeof(int));
    }
    for (int r=0;r<=gridSize-3;r++){
        for (int c=0;c<=gridSize-3;c++){
            int max=0;
            for (int j=r;j<r+3;j++){
                for(int k=c;k<c+3;k++){
                    if(max<grid[j][k])
                    max=grid[j][k];
                }
            }
            maxLocal[r][c]=max;
         }
    }
    return maxLocal;
}