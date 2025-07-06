bool canConstruct(char* ransomNote, char* magazine) {
    int map1[26]={0};
    int map2[26]={0};
    int i=0;
    while(ransomNote[i]){
        map1[ransomNote[i++]-'a']++;
    }
    i=0;
        while(magazine[i]){
        map2[magazine[i++]-'a']++;
    }
    i=0;
        while(ransomNote[i]){
        if (map1[ransomNote[i]-'a']>map2[ransomNote[i]-'a'])
        return false;
        i++;
    }
    return true;
}