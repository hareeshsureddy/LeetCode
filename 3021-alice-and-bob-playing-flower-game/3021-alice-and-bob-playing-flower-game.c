long long flowerGame(int n, int m) {
           long long res=0;
        /*   for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if((i+j)%2!=0) res++;
             }
           }
        */
           return (1LL)*(n/2)*((m+1)/2)+(1LL)*(m/2)*((n+1)/2);
           //return res;
}