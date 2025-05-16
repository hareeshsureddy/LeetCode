int numSpecial(int** mat, int matSize, int* matColSize) {
    int result=0;
    for (int i=0;i<matSize;i++){
        for (int j=0;j<*matColSize;j++){
            if (mat[i][j]){
                int rsum=0,csum=0;
                for (int k=0;k<*matColSize;k++){
                    rsum+=mat[i][k];
                }
                for (int k=0;k<matSize;k++){
                    csum+=mat[k][j];
                }
                if (csum==1 && rsum==1) result++;
            }
        }
    }
    return result;
}