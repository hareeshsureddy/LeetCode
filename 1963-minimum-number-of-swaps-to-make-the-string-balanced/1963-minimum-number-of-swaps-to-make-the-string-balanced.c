int minSwaps(char* s) {
    int len=strlen(s);
    char *stack=(char*)malloc(sizeof(char)*len);
    int idx=0;
    for(int i=0;i<len;i++){
        if(s[i]==']' && idx>0 && stack[idx-1]=='['){
                idx--;
        }else{
            stack[idx++]=s[i];
        }
    }
    idx>>=1;
    return (idx+1)>>1;
}