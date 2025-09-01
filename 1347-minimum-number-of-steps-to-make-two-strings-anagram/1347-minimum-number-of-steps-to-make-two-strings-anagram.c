int minSteps(char* s, char* t) {
    int map1[26];
    int i=0,cnt=0;
        while(s[i]){
        map1[s[i]-'a']++;
        map1[t[i++]-'a']--;
    }
        for(int i=0;i<26;i++){
        if(map1[i]>0)
        cnt+=map1[i];
    }
    return cnt;
}
/*
int minSteps(char* s, char* t) {
    int map1[26];
    int map2[26];
    int i=0,cnt=0;
    while(s[i]){
        map1[s[i]-'a']++;
        map2[t[i++]-'a']++;
    }
    for(int i=0;i<26;i++){
        cnt+=abs(map1[i]-map2[i]);
    }
    return cnt/2;
} */