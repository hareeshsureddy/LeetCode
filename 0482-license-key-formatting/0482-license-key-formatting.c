char* licenseKeyFormatting(char* s, int k) {
    int cnt=0;
    int i=0,j=0;
    while(s[i]){
        if(s[i++]!='-') cnt++;
    }
    if(!cnt) return "\0";
    int rem=cnt%k;
    char *res=(char*)malloc(sizeof(char)*(cnt+1+cnt/k));
    i=0;
    while(rem){
    if(s[i]!='-'){
    res[j]=(s[i]-'a'>=0)?s[i]-32:s[i];
    j++;
    rem--;
    }
    i++;
    }
    if(j!=0)
    res[j++]='-';
    cnt=cnt/k;
    while(s[i] && cnt){
        for(int l=0;l<k;){
            if(s[i]&&s[i]!='-'){
            res[j]=(s[i]-'a'>=0)?s[i]-32:s[i];
            l++;
            j++;
            }
            if(!s[i]) break;
            i++;            
        }
        res[j++]='-';
        cnt--;
    }
    res[--j]='\0';
    return res;
}