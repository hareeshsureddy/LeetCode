int minOperations(int n) {
    int num=1;
    int minOperations=0;
    for(int i=1;i<n;i++){
        if(num<n){
            minOperations+=n-num;
            num+=2;
        }else{
            break;
        }
    }
    return minOperations;
}