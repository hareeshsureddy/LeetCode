bool judgeCircle(char* moves) {
    int idx=0;
    int x=0,y=0;
    while(moves[idx]){
        switch(moves[idx]){
            case 'U':
            y++;
            break;
            case 'D':
            y--;
            break;
            case 'R':
            x++;
            break;
            case 'L':
            x--;
            break;                                    
        }
        idx++;
    }
    if(x==0 & y==0) return true;
    return false;
}