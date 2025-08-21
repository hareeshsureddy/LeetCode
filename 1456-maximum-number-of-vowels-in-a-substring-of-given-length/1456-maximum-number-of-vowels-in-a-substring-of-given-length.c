int maxVowels(char* s, int k) {
    int i=0,j=0,max=0,cnt=0;
    int len=strlen(s);
    while(j<len){
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') cnt++;
        if(j-i+1==k){
            max=(cnt>max)?cnt:max;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt--;
            i++;
        }
        j++;
    }
    return max;
}

/* int maxVowels(char* s, int k) {
    int len=strlen(s);
    int i=0,max=0;
    while(i<=(len-k)){
        int cnt=0;
        for(int j=i;j<(i+k);j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') cnt++;
        }
        max=(cnt>max)?cnt:max;
        if(max==k) break;
        i++;
    }
    return max;
} */