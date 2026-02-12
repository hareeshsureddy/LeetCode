char* removeDuplicates(char* s) {
    int idx=-1;
    int i=0;
    while(s[i]){
        while(idx>=0 && s[i] && s[idx]==s[i]){
            i++;
            idx--;
        }
        if(s[i])
        s[++idx]=s[i++];
    }
    s[++idx]='\0';
    return s;
}