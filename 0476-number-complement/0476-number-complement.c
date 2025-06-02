int findComplement(int num) {
        if(!(num>>31&1)){
           num|=0x80000000;
        }else
        return ~num;;
    for (int i=30;i>=0;i--){
        if(!(num>>i&1)){
           num|=(1<<i);
        }else
        break;
    }
    return ~num;
}