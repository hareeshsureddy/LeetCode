bool hasAlternatingBits(int n) {
    bool flag=n&1;
    n>>=1;
    while(n){
        if(!((n&1)^flag)) return false;
        flag=n&1;
        n>>=1;
    }
    return true;
/*    if(!(n&0xAAAAAAAA)) return true;
    if(!(n&0x55555555)) return true;
    return false; */
}