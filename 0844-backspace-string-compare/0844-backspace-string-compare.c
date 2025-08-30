bool backspaceCompare(char* s, char* t) {
    int i=0,j=0;
    int len1=strlen(s);
    int len2=strlen(t);
    while(j<len1){
        if(s[j]=='#'){
            j++;
            i--;
        }else{
            if(i<0) i=0;
            s[i++]=s[j++];
        }
    }
    if(i<0) i=0;
    s[i]='\0';
    i=0,j=0;
    while(j<len2){
        if(t[j]=='#'){
            j++;
            i--;
        }else{
            if(i<0) i=0;
            t[i++]=t[j++];
        }
    }
    if(i<0) i=0;
    t[i]='\0';
    if(strcmp(s,t)) return false;
    return true;
}