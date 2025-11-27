bool checkAlmostEquivalent(char* word1, char* word2) {
    int map[26]={0};
    int i=0;
    while(word1[i]){
        map[word1[i++]-'a']++;
    }
    i=0;
    while(word2[i]){
         map[word2[i++]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(map[i]<-3 || map[i]>3) return false;
    }
    return true;
}