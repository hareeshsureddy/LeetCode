int bitwiseComplement(int n) {
       if(!(n>>31&1)){
           n|=0x80000000;
        }else
        return ~n;
    for (int i=30;i>0;i--){
        if(!(n>>i&1)){
           n|=(1<<i);
        }else
        break;
    }
    return ~n; 
}