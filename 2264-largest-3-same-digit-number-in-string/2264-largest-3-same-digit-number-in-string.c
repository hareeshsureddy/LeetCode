char* largestGoodInteger(char* num) {
    int len=strlen(num);
    char Max=' ';
    for (int i=2;i<len;i++){
        if (num[i]==num[i-1] && num[i]==num[i-2])
        Max=(Max<num[i])?num[i]:Max;
    }
    /*
    for (int i=0,j=1;j<len;j++){
        if(num[i]==num[j]){
            continue;
        }else{
            if(j-i>=3){
                Max=(Max<num[i])?num[i]:Max;
            }
            i=j;
        }
    }
    */
    if(Max==' ') return "";
    char *result=(char*)malloc(sizeof(char)*4);
    result[0]=Max;
    result[1]=Max;
    result[2]=Max;
    result[3]='\0';
    return result;
}