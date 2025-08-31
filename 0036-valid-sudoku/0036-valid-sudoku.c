bool isValid(char **board,int row, int coloum, char c){
        for(int i=0;i<9;i++){
            if(board[row][i]==c) return false;
            if(board[i][coloum]==c) return false;
        }
        int start_i=(row/3)*3;
        int start_j=(coloum/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[start_i+i][start_j+j]==c) return false;
            }
        }
        return true;
}
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
               char c=board[i][j];
               board[i][j]='.';
               if(!isValid(board,i,j,c)) return false;
               board[i][j]=c;
            }
        }
    }
    return true;
}
/*
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    uint8_t map[9]={0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                if(++map[board[i][j]-'1']>1) return false;
            }
        }
        memset(map,0,9);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[j][i]!='.'){
                if(++map[board[j][i]-'1']>1) return false;
            }
        }
        memset(map,0,9);
    }
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(board[k][l]!='.'){
                        if(++map[board[k][l]-'1']>1) return false;
                     }
                }
            }
           memset(map,0,9);
        }
    } 
    return true;
} */