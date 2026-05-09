bool checkDivisibility(int n) {
    int org=n;
    int sum=0,product=1;
    while(n){
        int d=n%10;;
        sum+=d;
        product*=d;
        n/=10;
    }
    return (org % (sum + product) == 0)?1:0;
}