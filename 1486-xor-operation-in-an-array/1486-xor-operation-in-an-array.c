int xorOperation(int n, int start) {
    int result=0;
    int i=0;
    while(n){
        result^=start+2*i;
        n--;
        i++;
    }
    return result;
}