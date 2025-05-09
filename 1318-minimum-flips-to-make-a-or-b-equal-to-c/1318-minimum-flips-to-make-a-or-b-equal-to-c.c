

int minFlips(int a, int b, int c){
    uint8_t result=0;
    //Approach-1
    /*
    uint8_t bitCount=(uint8_t)floor(log2((a>b)?((a>c)?a:c):((b>c)?b:c)))+1;
    for(uint8_t i=0;i<bitCount;i++){
        if((c>>i)&1){
            if(!(((a>>i)&1) ||((b>>i)&1))){
                result++;
            }
        }
        else{
            if((a>>i)&1)
                result++;
            if((b>>i)&1)
                result++;
        }
    }
    */
    //Approach 2
    int temp=(a|b)^c;
    int temp1=(a&b)&temp;
    while(temp){
        temp&=(temp-1);
        result++;
    }
        while(temp1){
        temp1&=(temp1-1);
        result++;
    }
    return result;
}