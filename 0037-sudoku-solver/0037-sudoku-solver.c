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

bool solveBoard(char** board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(board,i,j,c)){
                    board[i][j]=c;
                    if(solveBoard(board)){
                    return true;
                    }
                    board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(char** board, int boardSize, int* boardColSize) {
     solveBoard(board);
}