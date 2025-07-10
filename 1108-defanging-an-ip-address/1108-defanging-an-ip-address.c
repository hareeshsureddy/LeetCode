

char * defangIPaddr(char * address){
    char *res=(char*)malloc(22*sizeof(char));
    int i=0,indexx=0;
    while(address[i]){
        if(address[i]=='.'){
        res[indexx++]='[';
        res[indexx++]='.';
        res[indexx++]=']';
        }else
        res[indexx++]=address[i];
        i++;
    }
    res[indexx]='\0';
    return res;
}