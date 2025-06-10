int maxDifference(char* s) {
    int map[26]={0};
    int i=0;
    while(s[i]){
        map[s[i]-'a']++;
        i++;
    }
    int MaxOdd=0;
    for(int i=0;i<26;i++){
        if(map[i]&1){
            if(MaxOdd<map[i])
            MaxOdd=map[i];
        }
    }
    int MinEvn=0xFF;
    for(int i=0;i<26;i++){
        if(map[i] && !(map[i]&1)){
            if(MinEvn>map[i])
            MinEvn=map[i];
        }
    }
    return MaxOdd-MinEvn;
}