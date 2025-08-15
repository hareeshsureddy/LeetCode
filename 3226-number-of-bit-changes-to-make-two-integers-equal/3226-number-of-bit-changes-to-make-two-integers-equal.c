int minChanges(int n, int k) {
    if(n<k) return -1;
    if(n==k) return 0;
    int xor=n^k;
    int cnt=0;
    while(xor){
        if(xor&1 && !(n&1)) return -1;
        if(xor&1 && (n&1))
        cnt++;
        xor>>=1;
        n>>=1;
    }
    return cnt;
}