/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findMatrix(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int **findMatrix=(int**)malloc(sizeof(int*));
    int rows=0;
    int *map=(int*)calloc(sizeof(int),(numsSize+1));
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    int *coloumsArray=(int*)malloc(sizeof(int));
    bool status=true;
    while(1){
        status=false;
        int coloum=0;
        int coloumSize=1;
        findMatrix[rows]=(int*)malloc(sizeof(int));
        for(int i=1;i<(numsSize+1);i++){
            if(map[i]){
                if(coloumSize<=coloum){
                    coloumSize*=2;
                findMatrix[rows]=(int*)realloc(findMatrix[rows],sizeof(int)*coloumSize);
                }
              findMatrix[rows][coloum++]=i;
              map[i]--;
              status=true; 
            }
        }
        coloumsArray[rows]=coloum;
         if(!status) break;
        rows++;
        findMatrix=(int**)realloc(findMatrix,sizeof(int*)*(rows+1));
        coloumsArray=(int*)realloc(coloumsArray,sizeof(int)*(rows+1));
    }
    *returnColumnSizes=coloumsArray;
    *returnSize=rows;
    return findMatrix;
}