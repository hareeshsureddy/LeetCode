

int minFlips(int a, int b, int c){
    int result=0;
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    int bitCount=(int)floor(log2(max))+1;
    for(int i=0;i<bitCount;i++){
        if((c>>i)&1){
            if(!(((a>>i)&1) ||((b>>i)&1))){
               // a|=(1<<i);
                result++;
            }
        }
        else{
            if((a>>i)&1){
                //a&=~(1<<i);
                result++;
            }
            if((b>>i)&1){
               //b&=~(1<<i);
                result++;
            }
        }
    }
    return result;
}