char shift(char c, int x){
        return c+x-'0';
}

char* replaceDigits(char* s) {
    int len=strlen(s);
    for(int i=1;i<len;i+=2){
       s[i]= shift(s[i-1], s[i]);
    }
    return s;
}