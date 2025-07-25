/* //Method-1
char * sortSentence(char * s){
    int len=strlen(s);
    char *res=(char*)malloc(sizeof(char)*len+10);
    int indexx=0;
    for(char i='1';i<'10';i++){
        int j=0;
        while(j<len && s[j]!=i) j++;
        if(j==len) break;
        while(j>=0 && s[j]!=' ') j--;
        j++;
        while(j<len && s[j]!=i){
            res[indexx++]=s[j++];
        }
        res[indexx++]=' ';
    }
    res[indexx-1]='\0';
    return res;
} */
//Method-2
char * sortSentence(char * s){
    int wordCnt=1;
    int i=0;
    while(s[i]){
        if(s[i++]==' ') wordCnt++;
    }
    //"is2 sentence4 This1 a3"
    char **wordList=(char**)malloc(sizeof(char*)*wordCnt);
    char *res=(char*)malloc(sizeof(char)*strlen(s));
    char *start=s;
    i=0;
    while(s[i]){
        if(s[i]==' '|| s[i+1]=='\0'){
            if(s[i+1]=='\0'){
                wordList[s[i]-'0'-1]=start;
                s[i]='\0';
                break;
            }
            wordList[(s[i-1]-'0')-1]=start;
            s[i-1]='\0';
            start=&s[i+1];
        }
        i++;
    }
    int indexx=0;
    for(int i=0;i<wordCnt;i++){
        int j=0;
        while(wordList[i][j]){
            res[indexx++]=wordList[i][j++];
        }
        res[indexx++]=' ';
    }
     res[indexx-1]='\0';
     return res;
}