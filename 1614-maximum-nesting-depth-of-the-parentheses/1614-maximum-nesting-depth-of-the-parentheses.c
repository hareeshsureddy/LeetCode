int maxDepth(char* s) {
    uint8_t max=0,vps=0,i=0,len=strlen(s);
    while(i<len){
        if(s[i]=='(') max=(++vps<max)?max:vps;
        else if(s[i]==')') vps--;
        i++;
    }
    return max;
}