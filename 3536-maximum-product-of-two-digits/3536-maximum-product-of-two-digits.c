int maxProduct(int n) {
    int n1=0,n2=0;
    while(n){
        int d=n%10;
        if(n1<d){
            n2=n1;
            n1=d;
        }else if(n2<d){
            n2=d;
        }
        n/=10;
    }
    return n1*n2;
}