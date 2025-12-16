int minChanges(char* s) {
    int minChanges=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!=s[i+1]) minChanges++;
        i++;
    }
    return minChanges;
}