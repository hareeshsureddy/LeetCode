

int minFlips(int a, int b, int c){
    int result=0;
    int bitCount=(int)floor(log2((a>b)?((a>c)?a:c):((b>c)?b:c)))+1;
    for(int i=0;i<bitCount;i++){
        if((c>>i)&1){
            if(!(((a>>i)&1) ||((b>>i)&1))){
                result++;
            }
        }
        else{
            if((a>>i)&1){
                result++;
            }
            if((b>>i)&1){
                result++;
            }
        }
    }
    return result;
}