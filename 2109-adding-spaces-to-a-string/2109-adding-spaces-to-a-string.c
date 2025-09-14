char* addSpaces(char* s, int* spaces, int spacesSize) {
    int len=strlen(s);
    char *res=(char*)malloc(sizeof(char)*(len+spacesSize+1));
    int i=0,j=0;
    for(int k=0;k<spacesSize;k++){
        while(spaces[k]!=i){
            res[j++]=s[i++];
        }
        res[j++]=' ';
    }
    while(i<len)
    res[j++]=s[i++];
    res[j]='\0';
    return res;
}