bool canConstruct(char* ransomNote, char* magazine) {
    /* //Method-1
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
    */
    //Method-2
    int map[26]={0};
        int i=0;
        while(magazine[i]){
        map[magazine[i++]-'a']++;
    }
    i=0;
    while(ransomNote[i]){
        map[ransomNote[i]-'a']--;
        if(map[ransomNote[i++]-'a']<0) return false;
    }
    return true;
}