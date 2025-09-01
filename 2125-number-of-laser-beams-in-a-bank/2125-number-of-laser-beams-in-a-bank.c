int numberOfBeams(char** bank, int bankSize) {
    int prev=0,pres=0;
    int cnt=0;
    for(int i=0;i<bankSize;i++){
        int j=0;
        while(bank[i][j]){
            if(bank[i][j++]=='1') pres++;
        }
        if(!pres) continue;
        if(prev){
            cnt+=prev*pres;
        }
        prev=pres;
        pres=0;
    }
    return cnt;
}