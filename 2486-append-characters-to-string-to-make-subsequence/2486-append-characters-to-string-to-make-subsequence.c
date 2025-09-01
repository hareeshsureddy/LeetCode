int appendCharacters(char* s, char* t) {
    if (strstr(s,t)) return 0;
    int len=strlen(s);
    int len1=strlen(t);
    int i,j,max=0;
    int cnt=0;
    for( i=0;i<len;i++){
        for( j=0+cnt;j<len1;j++){
            if(j<len1 && i+j<len && s[i+j]==t[j])
            cnt++;
            else
            break;
        }
        max=(max<cnt)?cnt:max;
    }
    return len1-max;
}