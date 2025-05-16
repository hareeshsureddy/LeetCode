int numSpecial(int** mat, int matSize, int* matColSize) {
    int result=0;
    /*Brute force*/
  /*  for (int i=0;i<matSize;i++){
        for (int j=0;j<*matColSize;j++){
            if (mat[i][j]){
                int rsum=0,csum=0;
                for (int k=0;k<*matColSize;k++){
                    rsum+=mat[i][k];
                   if (rsum>1) break;
                }
                if (rsum>1) break;
                for (int k=0;k<matSize;k++){
                    csum+=mat[k][j];
                    if (csum>1) break;
                }
                if (csum>1) break;
                if (csum==1 && rsum==1) result++;
            }
        }
    } */
    int sum=0;
    int row[matSize],col[*matColSize];
    for (int i=0;i<matSize;i++){
        for (int j=0;j<*matColSize;j++){
            sum+=mat[i][j];
        }
        row[i]=sum;
        sum=0;
    }
    for (int i=0;i<*matColSize;i++){
        for (int j=0;j<matSize;j++){
            sum+=mat[j][i];
        }
        col[i]=sum;
        sum=0;
    }
    for (int i=0;i<matSize;i++){
        for (int j=0;j<*matColSize;j++){
            if (mat[i][j]){
                if(row[i]==1 &&col[j]==1) result++;
            }
        }
    }
    return result;
}