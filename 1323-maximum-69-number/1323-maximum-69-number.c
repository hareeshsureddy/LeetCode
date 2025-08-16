int maximum69Number (int num) {
    char *res=(char*)malloc(sizeof(char)*6);
    sprintf(res,"%d",num);
    int i=0;
    while(res[i]){
        if(res[i]=='6'){
        res[i]='9';
        break;
        }
        i++;
    }
    return atoi(res);
}