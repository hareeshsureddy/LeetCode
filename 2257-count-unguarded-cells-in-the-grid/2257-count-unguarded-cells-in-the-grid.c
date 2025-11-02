int countUnguarded(int m, int n, int** guards, int guardsSize, int* guardsColSize, int** walls, int wallsSize, int* wallsColSize) {
        char **GW=(char**)malloc(sizeof(char*)*m);
        for(int i=0;i<m;i++){
            GW[i]=(char*)calloc(sizeof(char),n);
        }
        for(int i=0;i<guardsSize;i++){
            GW[guards[i][0]][guards[i][1]]='G';
        }
        for(int i=0;i<wallsSize;i++){
            GW[walls[i][0]][walls[i][1]]='W';
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(GW[i][j]=='G'){
                    for(int c=j+1;c<n;c++){
                        if(GW[i][c]=='W' || GW[i][c]=='G') break;
                        GW[i][c]='R';
                    }
                    for(int c=j-1;c>=0;c--){
                        if(GW[i][c]=='W' || GW[i][c]=='G') break;
                        GW[i][c]='R';
                    }
                    for(int r=i-1;r>=0;r--){
                        if(GW[r][j]=='W' || GW[r][j]=='G') break;
                        GW[r][j]='R';
                    }
                    for(int r=i+1;r<m;r++){
                        if(GW[r][j]=='W' || GW[r][j]=='G') break;
                        GW[r][j]='R';
                      //  printf("r=%d c=%d ",r,j);
                    }
                }
            }
        }
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(GW[i][j]==NULL){
                    res++;
                }
            
               // printf("%c ",GW[i][j]);
            }
           // printf("\n");
        }
        return res;
}