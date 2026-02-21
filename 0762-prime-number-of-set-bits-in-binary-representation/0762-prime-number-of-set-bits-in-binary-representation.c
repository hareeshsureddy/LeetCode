int countPrimeSetBits(int left, int right) {
    int countPrimeSetBits=0;
    for(int i=left;i<=right;i++){
        int num=i;
        int cnt=0;
        while(num){
            cnt++;
            num&=(num-1);
        }
        if(cnt==1)
        continue;
        bool status=true;
        for(int j=2;j<=cnt/2;j++){
            if(cnt%j==0){
                status=false;
            }
        }
        if(status) countPrimeSetBits++;
    }
    return countPrimeSetBits;
}