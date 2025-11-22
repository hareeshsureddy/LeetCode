int partitionString(char* s) {
    int max=0;
    int i=0;
    bool map[26];
    int len=strlen(s);
    while(i<len){
        memset(map,0,sizeof(map));
        while(i<len && map[s[i]-'a']==false){
                map[s[i]-'a']=true;
                i++;
        }
        max++;
    }
    return max;
    /*
    int map[26]={0};
    int i=0;
    int max=0;
    while(s[i]){
        map[s[i]-'a']++;
        if(map[s[i]-'a']>max) max=map[s[i]-'a'];
        i++;
    }
    return max;
    */
}