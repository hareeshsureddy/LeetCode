int subtractProductAndSum(int n) {
    long long mul=1;
    long long sum=0;
    while(n){
        int num=n%10;
        n/=10;
        mul*=num;
        sum+=num;
    }
    return mul-sum;
}