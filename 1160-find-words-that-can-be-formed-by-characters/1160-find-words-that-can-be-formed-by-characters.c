int countCharacters(char** words, int wordsSize, char* chars) {
    int map[26]={0};
    int len=strlen(chars);
    for (int i=0;i<len;i++){
        map[chars[i]-'a']++;
    }
    int result=0;
    for (int i=0;i<wordsSize;i++){
        bool ok=true;
        int map1[26]={0};
        char *s=words[i];
        int len=strlen(s);
     for (int k=0;k<len;k++){
        map1[s[k]-'a']++;
    }
    for (int j=0;j<26;j++ ){
        if(map1[j]>map[j]){
            ok=false;
            break;
        }
    }
    if(ok==true)  result+=len;
    }
    return result;
}