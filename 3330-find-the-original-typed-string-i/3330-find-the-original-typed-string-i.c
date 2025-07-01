int possibleStringCount(char* word) {
    int stringCnt=0;
    int len=strlen(word);
    int i=0,j=0;
    while(i<len-1){
        j=i+1;
        while(word[i]==word[j++]) stringCnt++;
        i=j-1;
    }
    return stringCnt+1;
}