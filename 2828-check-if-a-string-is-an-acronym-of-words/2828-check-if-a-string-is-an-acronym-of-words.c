bool isAcronym(char** words, int wordsSize, char* s) {
   int idx=0;
   int len = strlen(s);
   if(len!=wordsSize) return false;
    for(int i=0;i<wordsSize;i++){
        if(s[idx]){
            if (s[idx++]!=words[i][0]){
                return false;
            }
        }
    }
    return true;
}