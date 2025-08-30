bool repeatedSubstringPattern(char* s) {
    int len=strlen(s);
    char *temp=(char*)malloc(sizeof(char)*(len+1));
    for(int i=len/2;i>0;i--){
        if(len%i==0){
            int times=len/i;
            int index=0;
            while(times--){
              for(int j=0;j<i;j++)
                temp[index++]=s[j];
            }
            temp[index]='\0';
            if(!strcmp(s,temp)) return true;
        }
    }
    return false;
    /*
    if(len%2) return false;
    int j=len/2;
    for (int i=0;i<(len/2);i++){
            if(s[i]!=s[j++]) return false;
    }
    return true;
    */
}