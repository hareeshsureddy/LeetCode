int smallestRepunitDivByK(int k) {
    long long num=1;
    int digit=0;
    long long mum=1;
    while(digit<=k){
        digit++;
        if(num%k==0) return digit;
        num=num%k*10+1;
    }
    return -1;
}