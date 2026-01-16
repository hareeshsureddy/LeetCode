bool areOccurrencesEqual(char* s) {
    int map[26]={0};
    int freq=0;
    for(int i=0;s[i];i++){
        map[s[i]-'a']++;
        freq=map[s[i]-'a'];
    }
    for(int i=0;i<26;i++){
        if(!(map[i]==0 || map[i]==freq)) return false;

    }
    return true;
}