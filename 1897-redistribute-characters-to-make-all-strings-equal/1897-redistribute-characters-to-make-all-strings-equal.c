bool makeEqual(char** words, int wordsSize) {
    int map[26]={0};
    for (uint8_t i=0;i<wordsSize;i++){
        uint8_t index=0;
        while(words[i][index]){
            map[words[i][index++]-'a']++;
        }
    }
    for (uint8_t i=0;i<26;i++){
        if(map[i]%wordsSize!=0) return false;
    }
    return true;
}