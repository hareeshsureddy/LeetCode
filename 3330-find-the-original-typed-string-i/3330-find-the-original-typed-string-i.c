int possibleStringCount(char* word) {
    int stringCnt=0;
    int len=strlen(word);
    for (int i=1;i<len;i++){
       if (word[i-1]==word[i]) stringCnt++;
    }
    /*
    int i=0,j=0;
    while(i<len-1){
        j=i+1;
        while(word[i]==word[j++]) stringCnt++;
        i=j-1;
    } */
    return stringCnt+1;
}