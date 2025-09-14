
int maxNumberOfBalloons(char* text) {
    int len=strlen(text);
    if(len<7) return 0;
    int map[26];
    for(int i=0;i<len;i++){
        map[text[i]-'a']++;
    }
    int cnt=0;
    while(map[0]>=1 && map[1]>=1 && map[11]>=2 && map[14]>=2 && map[13]>=1){
            cnt++;
            map[0]-=1;
            map[1]-=1;
            map[11]-=2;
            map[14]-=2;
            map[13]-=1;
    }
    return cnt;
}