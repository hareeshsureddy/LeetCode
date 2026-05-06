/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
char** rotateTheBox(char** boxGrid, int boxGridSize, int* boxGridColSize,
                    int* returnSize, int** returnColumnSizes) {
    char** rotateTheBox = (char**)malloc(sizeof(char*) * boxGridColSize[0]);
    int* colSize = (int*)malloc(sizeof(int) * boxGridColSize[0]);
    for (int i = 0; i < boxGridColSize[0]; i++) {
        rotateTheBox[i] = (char*)malloc(sizeof(char) * boxGridSize);
        colSize[i] = boxGridSize;
    }
    *returnColumnSizes = colSize;
    *returnSize = boxGridColSize[0];
    for(int i=0;i<boxGridSize;i++){
        int c=boxGridSize-1-i;
        int r=boxGridColSize[0]-1;
        for(int j=boxGridColSize[0]-1;j>=0;j--){
            if(boxGrid[i][j]=='.'){
                    rotateTheBox[j][c]='.';
                    continue;
            }else if(boxGrid[i][j]=='#'){
                    rotateTheBox[j][c]='.';
                    rotateTheBox[r--][c]='#';
            }else{
                    rotateTheBox[j][c]='*';
                    r=j-1;
            }
        }
        while(r>=0){
            rotateTheBox[r--][c]='.';
        }
    }
    return rotateTheBox;
}