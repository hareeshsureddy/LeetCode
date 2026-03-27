bool areSimilar(int** mat, int matSize, int* matColSize, int k) {
    k=k%matColSize[0];
    int **org=(int**)malloc(sizeof(int*)*matSize);
    for(int i=0;i<matSize;i++){
        org[i]=(int*)malloc(sizeof(int)*matColSize[0]);
        for(int j=0;j<matColSize[0];j++){
            org[i][j]=mat[i][j];
        }
    }
    while(k){
        for(int i=0;i<matSize;i++){
            if(i&1){
                int temp=mat[i][0];
                for(int j=1;j<matColSize[0];j++){
                    mat[i][j-1]=mat[i][j];
                }
                mat[i][matColSize[0]-1]=temp;
            }else{
                int temp=mat[i][matColSize[0]-1];
                for(int j=matColSize[0]-1;j>0;j--){
                    mat[i][j]=mat[i][j-1];
                }
                mat[i][0]=temp;
            }
        }
        k--;
    }
    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[0];j++){
            if(mat[i][j]!=org[i][j]) return false;
        }
    }
    return true;
}