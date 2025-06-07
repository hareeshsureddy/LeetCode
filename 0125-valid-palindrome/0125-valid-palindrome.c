/* bool isPalindrome(char* s) {
    int len=strlen(s);
    int i=0,j=len-1;
    while(s[i]!='\0'){
        s[i]=(s[i]-'A'>=32)?(s[i]-32):s[i];
        i++;
    }
    i=0;
    while(i<j){
        while(i<len && !(s[i]-'A'>=0) && !(s[i]-'A'<=25) ){
                i++;
        }
        while(j>=0 && !(s[j]-'A'>=0) && !(s[j]-'A'<=25) ){
                j--;
        }
        if(i<len && j>=0 && s[j]!=s[i])  return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
} */
bool isPalindrome(char* s) {
    if(s==" "){
        return true;
    }
    char S[strlen(s)+1];
    int k=0;
    for(int i=0;s[i]!='\0';i++){
        if(isalnum(s[i])){
            S[k++] = tolower(s[i]);
        }
    }
    
        S[k] = '\0';
    char dest[strlen(S)+1];
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        dest[i] = S[len - i - 1];
    }
    dest[len] = '\0';
    if(strcmp(dest,S)==0)
    return true;
    return false;
}