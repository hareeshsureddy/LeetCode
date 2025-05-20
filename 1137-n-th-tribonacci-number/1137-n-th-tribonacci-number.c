int tribonacci(int n) {
    int T1T2T3[3]={0,1,1};
    if(n==0) return 0;
    else if (n==1 || n==2) return 1;
    for (int i=3;i<=n;i++){
        T1T2T3[i%3]=T1T2T3[0]+T1T2T3[1]+T1T2T3[2];
    }
    return T1T2T3[n%3];
}