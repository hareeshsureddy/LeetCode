bool rotateString(char* s, char* goal) {
    int sLen=strlen(s);
    int goalLen=strlen(goal);
    if(sLen!=goalLen) return false;
    int start=0;
    while(start<goalLen){
        int end=0,i=0;
        int j=start;
        while(end<goalLen){
            if(s[i++]!=goal[j++])
            break;
            end++;
            j%=goalLen;
        }
        if(end==goalLen) return true;
        start++;
    }
    return false;
}