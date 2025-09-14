/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int **matrix=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        matrix[i]=(int*)malloc(sizeof(int)*n);
        memset(matrix[i],-1,sizeof(int)*n);
    }
    int *columnSize=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        columnSize[i]=n;
    }
    *returnColumnSizes=columnSize;
    *returnSize=n;
    int top=0,down=n-1;
    int left=0,right=n-1;
    int dir=0, num=1;
    const int NUM=pow(n,2);
    while(num<=NUM){
        switch(dir){
        case 0:
        for(int j=left;j<=right;j++){
        matrix[top][j]=num++;
        }
        top++;
        dir=1;
        break;
        case 1:
        for(int i=top;i<=down;i++){
        matrix[i][right]=num++;
        }
        right--;
        dir=2;
        break;
        case 2:
        for(int j=right;j>=left;j--){
        matrix[down][j]=num++;
        }
        down--;
        dir=3;
        break;
        case 3:
        for(int i=down;i>=top;i--){
        matrix[i][left]=num++;
        }
        left++;
        dir=0;
        break;
        }
    }
    return matrix;
}