bool isPrefixString(char* s, char** words, int wordsSize) {
    int len = strlen(s);
    char str[len+1];
    int idx=0;
    for(int i=0;i<wordsSize;i++){
        int j=0;
        while(words[i][j] && idx<len){
            str[idx++]=words[i][j++];
        }
        if(words[i][j]) return false;
        if(idx==len) break;
    }
    str[idx]='\0';
    if(strcmp(s,str)) return false;
    return true;
}