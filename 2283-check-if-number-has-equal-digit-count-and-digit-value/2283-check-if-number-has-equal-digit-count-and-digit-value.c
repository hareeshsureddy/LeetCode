bool digitCount(char* num) {
    int map[10]={0};
    int len=strlen(num);
    for(int i=0;i<len;i++){
        map[num[i]-'0']++;
    }
    for(int i=0;i<len;i++){
        if(map[i]!=num[i]-'0') return false;
    }
    return true;
}