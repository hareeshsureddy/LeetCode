int maxFreqSum(char* s) {
    int8_t map[26]={0};
    while(*s)
    map[*s++-'a']++;
    int n1=0,n2=0;
    for(int i=0;i<26;i++){
        if(i==0||i==4||i==8||i==14||i==20){
            n1=(n1<map[i])?map[i]:n1;
        }else
        n2=(n2<map[i])?map[i]:n2;
    }
    return n1+n2;
}