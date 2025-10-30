bool areNumbersAscending(char* s) {
    int prev=-1;
    int pres=0;
    int len=strlen(s);
    int i=0;
    while(i<len){
        if(s[i]>='0' && s[i]<='9'){
            pres=0;
            while(i <len && s[i]>='0' && s[i]<='9'){
                pres*=10;
                pres+=s[i]-'0';
                i++;
            }
            if(prev<0){
                prev=pres;
            }else if(prev<pres){
                prev=pres;
            }else{
                return false;
            }
        }else
        i++;
    }
    return true;
}