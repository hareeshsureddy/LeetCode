bool isAnagram(char* s, char* t) {
    uint16_t len1=strlen(s);
    uint16_t len2=strlen(t);
    if( len1 != len2) return false;
    uint16_t map1[26]={0},map2[26]={0};
    for( uint16_t i=0;i<len1;i++){
        map1[s[i]-'a']++;
        map2[t[i]-'a']++;
    }
    uint8_t i=0;
    for (;i<26;i++){
        if(map1[i]!=map2[i]) return false;
    }
    return true;
}