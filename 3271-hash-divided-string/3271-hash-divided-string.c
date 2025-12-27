char* stringHash(char* s, int k) {
    int len=strlen(s);
    int resLen=len/k;
    char *res=(char*)malloc(sizeof(char)*(resLen+1));
    int idx=0;
    for(int i=0;i<resLen;i++){
        int sum=0;
        for(int j=0;j<len/resLen;j++){
            sum+=s[idx++]-'a';
        }
        res[i]='a'+(sum%26);
    }
    res[resLen]='\0';
    return res;
}