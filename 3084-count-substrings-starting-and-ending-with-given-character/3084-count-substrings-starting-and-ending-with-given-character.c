
long long countSubstrings(char* s, char c) {
    long cnt=0;
    while(*s){
        if(*s++==c) cnt++;
    }
    return ((cnt)*(cnt+1))/2;
}