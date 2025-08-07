int myAtoi(char* s) {
    int index=0;
    bool sign=true;
    while(s[index]!='\0' && s[index]==' ') index++;
    if(s[index]=='+'){
        sign=true;
        index++;
    }
    else if(s[index]=='-'){
        sign=false;
        index++;
    } 
    if(!s[index] || s[index]<'0' || s[index]>'9'){
        return 0;
    }
    long long int result=0;
    int mum=1;
    while(s[index] && s[index]=='0') index++;
    while(s[index] && (s[index]>='0'&& s[index]<='9')){
        result*=10;
        result+=(s[index++]-'0');
        if(result>INT_MAX) break;
    }
    if(!sign)   result*=-1;
    if(result>INT_MAX) result=INT_MAX;
    if(result<INT_MIN) result=INT_MIN;
    return result;
}