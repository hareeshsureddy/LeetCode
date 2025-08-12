char* makeGood(char* s) {
    char *res=(char*)malloc(strlen(s)+1);
    int i=0,index=0;
    int len=strlen(s);
    while(i<len){
        res[index++]=s[i++];
        if(index>1){
            if(abs(res[index-2]-res[index-1])==32)
            index-=2;
        }
    }
    res[index]='\0';
    return res;
}