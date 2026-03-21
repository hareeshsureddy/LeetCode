/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** reverseSubmatrix(int** grid, int gridSize, int* gridColSize, int x, int y, int k, int* returnSize, int** returnColumnSizes) {
    *returnSize=gridSize;
    *returnColumnSizes=gridColSize;
    int t=x,b=x+k-1;
    while(t<b){
        for(int i=y;i<y+k;i++){
            int temp=grid[t][i];
            grid[t][i]=grid[b][i];
            grid[b][i]=temp;
        }
        t++;
        b--;
    }
    return grid;
}