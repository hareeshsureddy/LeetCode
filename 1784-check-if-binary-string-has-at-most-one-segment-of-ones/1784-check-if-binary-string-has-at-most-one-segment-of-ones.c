bool checkOnesSegment(char* s) {
    int i=0;
    bool status=true;
    while(s[i]){
        if(status){
            if(s[i]!='1')
            status=false;
        }else{
            if(s[i]=='1') return false;
        }
        i++;
    }
    return true;
}