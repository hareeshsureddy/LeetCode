char* breakPalindrome(char* palindrome) {
    int len=strlen(palindrome);
    if(len==1) return "";
    bool status=true;
    for(int i=0;i<len/2;i++){
        if(palindrome[i]!='a'){
        palindrome[i]='a';
        status=false;
        break;
        }
    }
    if(status)
    palindrome[len-1]='b';
    return palindrome;
}