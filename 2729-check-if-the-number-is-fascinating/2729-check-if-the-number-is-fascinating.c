bool isFascinating(int n) {
    bool status[10]={false};
    int num=n;
    status[0]=true;
    while(num){
        int idx=num%10;
        if(status[idx]) return false;
        status[idx]=true;
        num/=10;
    }
    num=2*n;
    while(num){
        int idx=num%10;
        if(status[idx]) return false;
        status[idx]=true;
        num/=10;
    }
        num=3*n;
    while(num){
        int idx=num%10;
        if(status[idx]) return false;
        status[idx]=true;
        num/=10;
    }
    return true;
}