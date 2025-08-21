int maxPower(char* s) {
    int i=0,j=0,max=1;
    int len=strlen(s);
    while(j<len){
        if(s[i]!=s[j]){
            max=(j-i>max)?j-i:max;
            i=j;
        }
        j++;
    }
    max=(j-i>max)?j-i:max;
    return max;
}