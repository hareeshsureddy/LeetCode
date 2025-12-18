int maxDistinct(char* s) {
    bool map[26]={false};
    int i=0;
    while(s[i]){
        map[s[i++]-'a']=true;
    }
    int maxDistinct=0;
    for(int i=0;i<26;i++){
        if(map[i]) maxDistinct++;
    }
    return maxDistinct;
}