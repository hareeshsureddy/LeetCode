char* compressedString(char* word) {
    int len=strlen(word);
    char *res=(char*)malloc(sizeof(char)*len*2+1);
    int i=0,j=0,idx=0;
    while(j<len){
        while(j<len && word[i]==word[j]) j++;
        int size=j-i;
        while(size>0)
        {
        res[idx++]=(size>9)?'9':size+'0';
        res[idx++]=word[i];
        size-=9;
        }
        i=j;
    }
    res[idx]='\0';
    return res;
}