
char* removeDuplicateLetters(char* s) {
    int map[26];
    bool taken[26];
    memset(taken,false,26);
    int index=1;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        map[s[i]-'a']=i;
    }
    taken[s[0]-'a']=true;
    for(int i=1;i<len;i++){
        if(taken[s[i]-'a']) continue;
        while(index>0 && s[index-1]>s[i]){
            if(map[s[index-1]-'a']>i){
                index--;
                taken[s[index]-'a']=false;
            }else
            break;
        }
        s[index++]=s[i];
        taken[s[i]-'a']=true;
    }
    s[index]='\0';
    return s;
}