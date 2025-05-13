int hammingWeight(int n) {
    uint8_t cnt=0;
    while(n){
        n&=(n-1);
        cnt++;
    }
    return cnt;
}