bool halvesAreAlike(char* s) {
    int len=strlen(s);
    int i=0,vowelsCnt=0;
    while(i<len/2){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        vowelsCnt++;
        i++;
    }
    while(i<len){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        vowelsCnt--;
        i++;
    }
    if(vowelsCnt) return false;
    return true;
}