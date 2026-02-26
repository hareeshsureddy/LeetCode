
int numSteps(char* s) {
    int numSteps = 0;
    int len = strlen(s);
    int num = 0;
    while (len != 1) {
        int i = len - 1;
        if (s[i] == '1') {
            while (i >= 0 && s[i] != '0') {
                s[i--] = '0';
            }
            if (i >= 0) {
                s[i] = '1';
            } else {
                s[0] = '1';
                numSteps++;
            }
        } else {
            len--;
        }
        numSteps++;
      //  printf("%s %d\n",s,len);
    }
    return numSteps;
}
/*int numSteps(char* s) {
    int numSteps=0;
    int len=strlen(s);
    int num=0;
    for(int i=len-1;i>=0;i--)
    num+=(s[i]-'0')<<(len-i-1);
    while(num!=1){
        if(num&1)
        num++;
        else
        num>>=1;
        numSteps++;
    }
    return numSteps;
}*/