#define MOD 1000000007
int numSub(char* s) {
    int i=0,j=0;
    int len=strlen(s);
    long long sum=0;
    while(j<len){
        while(i<len && s[i]!='1') i++;
        j=i;
        while(j<len && s[i]==s[j]) j++;
        long long num=j-i;
        sum=(sum+((num*(num+1))/2))%MOD;
        i=j;
    }
    return (int)sum;
}