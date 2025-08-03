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
}