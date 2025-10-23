bool hasSameDigits(char* s) {
    int idx=0;
    int len=strlen(s);
    int len2=len;
    for(int i=0;i<len-2;i++){
        idx=0;
    while(idx<len2-1){
    int d1=s[idx]-'0';
    int d2=s[idx+1]-'0';
    int d=(d1+d2)%10;
    s[idx]=d+'0';
    idx++;
    }
    len2--;
    }
    if(s[0]==s[1]) return true;
    return false;
}