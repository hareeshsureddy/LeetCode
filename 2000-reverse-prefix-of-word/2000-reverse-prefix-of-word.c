char* reversePrefix(char* word, char ch) {
    int len=strlen(word);
    int i=0,j=0;
    for (;j<len;j++){
        if(ch==word[j]) break;
    }
    if(j==len) return word;
    while(i<j){
        char temp=word[j];
        word[j]=word[i];
        word[i]=temp;
        i++;
        j--;
    }
    return word;
}