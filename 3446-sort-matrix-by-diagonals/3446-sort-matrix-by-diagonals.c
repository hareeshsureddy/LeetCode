/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 int compareHL(const void *a, const void *b){
    return *(int*)b-*(int*)a;
 }
  int compareLH(const void *a, const void *b){
    return *(int*)a-*(int*)b;
 }
int** sortMatrix(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int *temp=(int*)malloc(sizeof(int)*gridSize);
    for(int i=0;i<gridSize;i++){
        int j=0;
        int k=i;
        int index=0;
        while(k<gridSize && j<gridSize){
            temp[index++]=grid[k++][j++];
        }
        qsort(temp,index,sizeof(int),compareHL);
        while(index>0){
            grid[--k][--j]=temp[--index];
        }
    }
    for(int i=1;i<gridSize;i++){
        int j=i;
        int k=0;
        int index=0;
        while(k<gridSize && j<gridSize){
            temp[index++]=grid[k++][j++];
        }
        qsort(temp,index,sizeof(int),compareLH);
        while(index>0){
            grid[--k][--j]=temp[--index];
        }
    }
    *returnSize=gridSize;
    *returnColumnSizes=gridColSize;
    return grid;
}