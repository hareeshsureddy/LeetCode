char* smallestSubsequence(char* s) {
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
        int k=s[i]-'a';
        if(taken[k]) continue;
        while(index>0 && s[index-1]>s[i]){
            int j=s[index-1]-'a';
            if(map[j]>i){
                taken[j]=false;
                index--;
            }else
            break;
        }
        s[index++]=s[i];
        taken[k]=true;
    }
    s[index]='\0';
    return s;
}