
bool buddyStrings(char* s, char* goal) {
    int len=strlen(s);
    int len1=strlen(goal);
    if(len!=len1) return false;
    int *map=(int*)calloc(sizeof(int),52);
    for(int i=0;i<len;i++){
        map[s[i]-'a']++;
    }
    for(int i=0;i<len;i++){
        map[goal[i]-'a'+26]++;
    }
    for(int i=0;i<26;i++){
        if(map[i]!=map[26+i]) return false;
    }
    if(strcmp(s,goal)){
        int missmatchCnt=0;
        for(int i=0;i<len;i++){
            if(s[i]!=goal[i]) missmatchCnt++;
        }
        if(missmatchCnt>2) return false;
        else
        return true;
    }
    for(int i=0;i<26;i++){
        if(map[i]>1) return true;
    }
    return false;
}