int titleToNumber(char* columnTitle) {
    int len=strlen(columnTitle);
    len--;
    long long mf=1,result=0;
    while(len>=0){
        int dig=columnTitle[len]-'@';
        result+=dig*mf;
        mf*=26;
        len--;
    }
    return result;
}