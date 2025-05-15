

int numberOfMatches(int n){
   int result=0;
    while(n>1){
        if(n&1){
           result+=n/2;
           n=(n>>1)+1; 
        }
        else{
            n>>=1;
            result+=n;
        }
    }
    return result;
}