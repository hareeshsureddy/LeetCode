/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *map=(int*)calloc((gridSize*gridSize+1),sizeof(int));
    int *result=(int*)malloc(2*sizeof(int));
    bool flag=true;
    int actualXor=0;
    for(int i=0;i<gridSize;i++){
        for (int j=0;j<gridSize;j++){
            if(map[grid[i][j]] && flag){
            result[0]=grid[i][j];
            flag=false;
            }
            actualXor^=grid[i][j];
            map[grid[i][j]]=1;
        }
    }
    int xor[4]={(gridSize*gridSize),1,(gridSize*gridSize)+1,0};
    result[1]=actualXor^result[0]^xor[(gridSize*gridSize)%4];
    *returnSize=2;
    return result;
}