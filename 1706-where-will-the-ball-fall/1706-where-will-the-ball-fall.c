/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findBall(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*(*gridColSize));
    for(int ball=0;ball<*gridColSize;ball++){
        int r=0;
        int c=ball;
        bool sts=true;
        while(r<gridSize && c<*gridColSize){
            if(grid[r][c]==1){
                c++;
                if(c==*gridColSize || grid[r][c]==-1){
                    res[ball]=-1;
                    sts=false;
                    break;
                }
            }else {
                c--;
                if(c<0 || grid[r][c]==1){
                    res[ball]=-1;
                    sts=false;
                    break;
                }
            }
            r++;
        }
        if(sts)
        res[ball]=c;
    }
    *returnSize=*gridColSize;
    return res;
}