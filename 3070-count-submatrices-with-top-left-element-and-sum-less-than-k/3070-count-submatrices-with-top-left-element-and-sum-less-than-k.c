int countSubmatrices(int** grid, int gridSize, int* gridColSize, int k) {
    int countSubmatrices=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<*gridColSize;j++){
            int sum=0;
            for(int m=0;m<=i;m++){
                for(int l=0;l<=j;l++){
                    sum+=grid[m][l];
                    if(sum>k) break;
                }
                if(sum>k) break;
            }
            if(sum<=k) countSubmatrices++;
        }
    }
    return countSubmatrices;
}