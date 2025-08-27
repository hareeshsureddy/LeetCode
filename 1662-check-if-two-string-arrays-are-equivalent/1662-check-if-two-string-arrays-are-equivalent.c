/* //Method-1
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char *s1=(char*)malloc(sizeof(char));
    int len=1,indexx=0;
    for(int i=0;i<word1Size;i++){
        len+=strlen(word1[i]);
        s1=(char*)realloc(s1,sizeof(char)*(len));
        int j=0;
        while(word1[i][j]){
            s1[indexx++]=word1[i][j++];
        }
        s1[indexx]='\0';
    }
    for(int i=0;i<word2Size;i++){
        if(!strstr(s1,word2[i])) return false;
    }
     len=1,indexx=0;
    for(int i=0;i<word2Size;i++){
        len+=strlen(word2[i]);
        s1=(char*)realloc(s1,sizeof(char)*(len));
        int j=0;
        while(word2[i][j]){
            s1[indexx++]=word2[i][j++];
        }
        s1[indexx]='\0';
    }
    for(int i=0;i<word1Size;i++){
        if(!strstr(s1,word1[i])) return false;
    }
    return true;
}   */
 //Method-2
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char *s1=(char*)malloc(sizeof(char));
    int len=1,indexx=0;
    for(int i=0;i<word1Size;i++){
        len+=strlen(word1[i]);
        s1=(char*)realloc(s1,sizeof(char)*(len));
        int j=0;
        while(word1[i][j]){
            s1[indexx++]=word1[i][j++];
        }
        s1[indexx]='\0';
    }
    char *s2=(char*)malloc(sizeof(char));
    len=1,indexx=0;
    for(int i=0;i<word2Size;i++){
        len+=strlen(word2[i]);
        s2=(char*)realloc(s2,sizeof(char)*(len));
        int j=0;
        while(word2[i][j]){
            s2[indexx++]=word2[i][j++];
        }
        s2[indexx]='\0';
    }
    if(!strcmp(s1,s2)) return true;
    else 
    return false;
}