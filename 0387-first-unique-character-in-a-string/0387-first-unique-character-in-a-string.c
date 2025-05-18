int firstUniqChar(char* s) {
    int map[26]={0};
    int len=strlen(s);
    for (int i=0;i<len;i++){
        map[s[i]-'a']++;
    }
    for (int i=0;i<len;i++){
        if(map[s[i]-'a']==1) return i;
    }
    return -1;
}