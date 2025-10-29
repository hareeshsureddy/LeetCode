int smallestNumber(int n) {
    while(1){
        /*
        int num=n;
        bool status=true;
        while(num){
            if(!(num&1)){
            status=false;
            break;
            }
            num>>=1;
        }
        if(status) return n;
        n++;
        */
        int num=1;
        while(num<n){
            num+=num+1;
        }
        return num;
    }
     return 1;
}