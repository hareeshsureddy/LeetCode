int numberOfSpecialChars(char* word) {
    bool map[52]={false};
    int idx=0;
    while(word[idx]){
        if(word[idx]<'a')
        map[word[idx]-65]=true;
        else
        map[word[idx]-71]=true;
        idx++;
    }
    int numberOfSpecialChars=0;
    for(int i=0;i<26;i++){
        if(map[i] && map[i+26])  numberOfSpecialChars++;
    }
    return  numberOfSpecialChars;
}