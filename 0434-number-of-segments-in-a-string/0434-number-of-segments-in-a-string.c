int countSegments(char* s) {
    if(!s[0]) return 0;
    int cnt=0,i=0;
    bool state=true;
    while(s[i]){
        if(state){
            if(s[i++]!=' '){
                cnt++;
                state=false;
            } 
        }else{
        if(s[i++]==' ') state=true;
        }
    }
    return cnt;
}