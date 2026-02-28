#define MOD107 1000000007
int concatenatedBinary(int n) {
    int concatenatedBinary = 0;
    for (int i = 1; i <= n; i++) {
        int num=i;
        char str[32]={'0'};
        int idx=0;
        while(num){
            str[idx++]=(num&1)?'1':'0';
            num>>=1;
        }
        while(idx){
            concatenatedBinary<<=1;
            concatenatedBinary|=(str[--idx]=='1')?1:0;
            num>>=1;
            concatenatedBinary%=MOD107;
        }
     //   printf("%d ",concatenatedBinary);
    }
    return concatenatedBinary;
}