int minOperations(char* s) {
    uint16_t len=strlen(s);
    uint16_t result1=0,result2=0;
    for (int i=0;i<len;i++){
        char expected1=(i&1)?'0':'1';
        char expected2=(i&1)?'1':'0';
        if(s[i]!=expected1) result1++;
        if(s[i]!=expected2) result2++;
        /*if(i&1){
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
        } */
    }
    return (result1<result2)?result1:result2;
}