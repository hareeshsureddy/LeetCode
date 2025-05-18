int maxLengthBetweenEqualCharacters(char* s) {
    int len=strlen(s);
    int map[26]={0};
    int Max=-1;
    for (int i=0;i<len;i++){
        int index=s[i]-'a';
        if(map[index]){
            Max=(Max<(i-map[index]))?(i-map[index]):Max;
        }else{
            map[index]=i+1;
        }
    }
    return Max;
}