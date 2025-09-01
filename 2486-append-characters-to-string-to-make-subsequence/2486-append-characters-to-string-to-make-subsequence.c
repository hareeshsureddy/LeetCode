int appendCharacters(char* s, char* t) {
    if (strstr(s,t)) return 0;
    int len=strlen(s);
    int len1=strlen(t);
    int idx=0;
    for(int i=0;i<len;i++){
        if(s[i]==t[idx]) idx++;
        if(idx==len1) return 0;
    }
    return len1-idx;
    /*
    int i=0,j=0;
    int cnt=0;
    while(i<len1){
        while(j<len){
            if(s[j]==t[i]){
                cnt++;
                j++;
                break;
            }
            j++;
        }
        if(j==len) break;
        i++;
    }
    */
    /*
    for( i=0;i<len;i++){
        for( j=0+cnt;j<len1;j++){
            if(j<len1 && i+j<len && s[i+j]==t[j])
            cnt++;
            else
            break;
        }
    } 
    return len1-cnt;
    */
}