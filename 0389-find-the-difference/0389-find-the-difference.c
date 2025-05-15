char findTheDifference(char* s, char* t) {
    //XOR Operation 
    int len=strlen(s);
    char XOR1=0;
    for (int i=0;i<len;i++){
        XOR1^=s[i]^t[i];
    }
   return XOR1^t[len];
}