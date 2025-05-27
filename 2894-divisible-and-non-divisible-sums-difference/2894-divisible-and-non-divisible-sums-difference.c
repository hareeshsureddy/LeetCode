int differenceOfSums(int n, int m) {
    if(m>n) return ((n*(n+1))/2);
    int num1=(((m-1)*m)/2);
    int num2=m;
    for(int i=m+1;i<=n;i++){
        if(i%m==0)
        num2+=i;
        else
        num1+=i;
    }
    return num1-num2;
}