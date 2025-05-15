char* largestOddNumber(char* num) {
    int len=strlen(num);
    int i=len-1;
    while(i>=0){
        if ((num[i]-'0')&1){
            num[i+1]='\0';
            return num;
        }
        i--;
    }
    return "";
}