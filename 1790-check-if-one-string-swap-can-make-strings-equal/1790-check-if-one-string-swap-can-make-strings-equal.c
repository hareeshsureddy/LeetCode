bool areAlmostEqual(char* s1, char* s2) {
    int i=0,diffCnt=0;
    while(s1[i]){
        if(s1[i]!=s2[i]){
            diffCnt++;
            if( diffCnt>2) return false;
        }
        i++;
    }
    int map1[26]={0},map2[26]={0};
    i=0;
    while(s1[i]){
        map1[s1[i]-'a']++;
        map2[s2[i]-'a']++;
        i++;
    }
    i=0;
    while(i<26){
        if(map1[i]!=map2[i]) return false;
        i++;
    }
    return true;
}