char* smallestEquivalentString(char* s1, char* s2, char* baseStr) {
    uint8_t map[26]={0};
    for(int i=0;i<26;i++)
    map[i]=i;
    int i=0;
    while(s1[i]){
        if(map[s1[i]-'a']<map[s2[i]-'a']){
            uint8_t idx=map[s2[i]-'a'];
            uint8_t new_idx=map[s1[i]-'a'];
            for(int i=0;i<26;i++){
                if(map[i]==idx){
                    map[i]=new_idx;
                }
            }
        }else{
            uint8_t idx=map[s1[i]-'a'];
            uint8_t new_idx=map[s2[i]-'a'];
            for(int i=0;i<26;i++){
                if(map[i]==idx){
                    map[i]=new_idx;
                }
            }
        }
        i++;
    }
    i=0;
    while(baseStr[i]){
        baseStr[i]='a'+map[baseStr[i]-'a'];
        i++;
    }
    return baseStr;
}