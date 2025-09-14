int rearrangeCharacters(char* text, char* target) {
    int len=strlen(text);
    int len1=strlen(target);
    if(len<len1) return 0;
    int map[26];
    int map1[26];
    for(int i=0;i<len;i++){
        map[text[i]-'a']++;
    }
    for(int i=0;i<len1;i++){
        map1[target[i]-'a']++;
    }
    int cnt=0,cnt1=0;
    int map2[10][2];
    for(int i=0;i<26;i++){
        if(map1[i]){
            map2[cnt1][0]=i;
            map2[cnt1++][1]=map1[i];
        }
    }
    while(1){
        int i;
        for(i=0;i<cnt1;i++){
            int j=map2[i][0];
            int k=map2[i][1];
            if(map[j]>=k)
            map[j]-=k;
            else
            break;
        }
        if(i==cnt1)
        cnt++;
        else
        break;
    }
    return cnt;
}