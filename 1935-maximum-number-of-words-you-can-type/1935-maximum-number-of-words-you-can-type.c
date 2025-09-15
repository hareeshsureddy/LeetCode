int canBeTypedWords(char* text, char* brokenLetters) {
    int map[26];
    int len1=strlen(text);
    int len2=strlen(brokenLetters);
    for(int i=0;i<len2;i++) map[brokenLetters[i]-'a']=1;
    int cnt=0,j=0;
    while(j<len1){
        bool sts=true;
        while(j<len1 && text[j]!=' '){
            if(map[text[j]-'a']){
                sts=false;
                break;
            }
            j++;
        }
        if(sts) cnt++;
        while(j<len1 && text[j]!=' ') j++;
        j++;
    }
    return cnt;
}