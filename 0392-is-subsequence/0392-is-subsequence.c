bool isSubsequence(char* s, char* t) {
    if(strlen(t)<strlen(s)) return false;
    int i=0,j=0,cnt=0;
    while (s[i]){
        while (t[j]){
            if(t[j]==s[i]){
            cnt++;
            j++;
            break;
            }
            j++;
        }
        i++;
    }
    if(cnt==strlen(s)) return true;
    else return false;
}