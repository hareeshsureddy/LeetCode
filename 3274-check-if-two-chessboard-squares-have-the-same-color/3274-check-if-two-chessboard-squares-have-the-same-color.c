bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    int r1=coordinate1[1]-'1';
    int r2=coordinate2[1]-'1';
    int c1=coordinate1[0]-'a';
    int c2=coordinate2[0]-'a';
    //Methode-1
    /*
    if(c1&1){
        if(r1&1){
            if(r2&1&c2&1 || (r2%2==0 && c2%2==0)) return true;
            else
            return false;
        }else{
            if((r2%2==1 && c2%2==0) || (r2%2==0 && c2%2==1)) return true;
            else
            return false;
        }
    }else{
        if(r1%2==0){
            if(r2&1&c2&1 || (r2%2==0 && c2%2==0)) return true;
            else
            return false;            
        }else{
            if((r2%2==1 && c2%2==0) || (r2%2==0 && c2%2==1)) return true;
            else
            return false;
        }
    }
    */
    bool chessboard[8][8];
    bool boxStatus=false;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            chessboard[i][j]=boxStatus;
            boxStatus=!boxStatus;
        }
        boxStatus=!boxStatus;
    }
    if(chessboard[r1][c1]==chessboard[r2][c2]) return true;
    else
    return false;
}