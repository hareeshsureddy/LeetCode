int minOperations(char* s) {
    uint16_t len=strlen(s);
    uint16_t result1=0,result2=0;
    for (int i=0;i<len;i++){
        if(i&1){
        if(s[i]!='0')
        result1++;
        }else{
         if(s[i]!='1') 
         result1++;  
        }   
        if(i&1){
        if(s[i]!='1')
        result2++;
        }else{
         if(s[i]!='0') 
         result2++;  
        } 
    }
   /* for (int i=1;i<len;i++){
        if(s[i]==s[i-1]){
            s[i]=(s[i]-'0')^1;
            result++;
        }
    }*/
    return (result1<result2)?result1:result2;
}