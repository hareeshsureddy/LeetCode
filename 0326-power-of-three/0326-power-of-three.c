bool isPowerOfThree(int n) {
    if(n<1) return false;
    while(n){
        if(n%3!=0) return false;
        else
        n/=3;
        if(n==1) return true;
    }
    return true;
}