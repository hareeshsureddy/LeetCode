#define MOD 1000000007
int countHomogenous(char* s) {
    int count=0;
    int i=0,j=0;
    int len=strlen(s);
    while(j<len){
        while(j<len && s[i]==s[j]) j++;
        long long cnt=j-i;
        cnt=(cnt*(cnt+1))/2;
        count=(count+cnt)%MOD;
        i=j;
    }
    return count;
}