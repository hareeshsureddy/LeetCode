char* makeFancyString(char* s) {
    char *result=(char*)malloc(sizeof(char)*(strlen(s)+1));
    int i=0,top=0;
    while(s[i]){
        if(top>1){
            if((result[top-2]==result[top-1]) && (result[top-1]==s[i]) ){
                i++;
            continue;
            }
            else
            result[top++]=s[i];
        }
        else
        result[top++]=s[i];
        i++;
    }
    result[top]='\0';
    return result;
}