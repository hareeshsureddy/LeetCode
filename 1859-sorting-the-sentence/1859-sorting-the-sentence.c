

char * sortSentence(char * s){
    int len=strlen(s);
    char *res=(char*)malloc(sizeof(char)*len+10);
    int indexx=0;
    for(char i='1';i<'10';i++){
        int j=0;
        while(j<len && s[j]!=i) j++;
        if(j==len) break;
        while(j>=0 && s[j]!=' ') j--;
        j++;
        while(j<len && s[j]!=i){
            res[indexx++]=s[j++];
        }
        res[indexx++]=' ';
    }
    res[indexx-1]='\0';
    return res;
}