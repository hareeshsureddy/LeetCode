int binaryGap(int n) {
    int binaryGap=0;
    int prev=-1;
    for(int i=0;i<30;i++){
        if(n&1){
            if(prev!=-1){
                binaryGap=fmax(binaryGap,i-prev);
                prev=i;
            }else{
                prev=i;
            }
        }
        n>>=1;
    }
    return binaryGap;
}