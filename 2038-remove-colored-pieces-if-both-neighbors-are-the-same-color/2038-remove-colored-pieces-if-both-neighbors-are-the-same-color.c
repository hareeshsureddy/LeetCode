bool winnerOfGame(char* colors) {
    int len=strlen(colors);
    int i=0;
    int A=0,B=0,cnt=0;
    while(i<len){
        while(i<len && colors[i]=='A'){
            cnt++;
            i++;
        }
        if(cnt>=3)
        A+=cnt-2;
        cnt=0;
        while(i<len && colors[i]!='A'){
            cnt++;
            i++;
        } 
        if(cnt>=3)
        B+=cnt-2;
        cnt=0;    
    }
    if(A<=B) return false;
    else
    return true;
}