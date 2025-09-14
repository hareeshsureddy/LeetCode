/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int top=0,down=matrixSize-1;
    int left=0,right=*matrixColSize-1;
    *returnSize=(matrixSize*(*matrixColSize));
    int *res=(int*)malloc(sizeof(int)*(*returnSize));
    int idx=0;
    int dir=0;
    while(top<=down && left<=right){
        switch(dir){
            case 0:
        for(int j=left;j<=right;j++)
        res[idx++]=matrix[top][j];
        top++;
        dir=1;
        break;
        case 1:
        for(int i=top;i<=down;i++)
        res[idx++]=matrix[i][right];
        right--;
        dir=2;
        break;
        case 2:
        for(int j=right;j>=left;j--)
        res[idx++]=matrix[down][j];
        down--;
        dir=3;
        break;
        case 3:
        for(int i=down;i>=top;i--)
        res[idx++]=matrix[i][left];
        left++;
        dir=0;
        break;
        }
    }
    return res;
}