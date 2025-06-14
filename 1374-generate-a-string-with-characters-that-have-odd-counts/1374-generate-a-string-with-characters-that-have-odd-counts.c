char* generateTheString(int n) {
    char *result=(char*)malloc((n+1)*sizeof(char));
    if(n&1){
        for(int i=0;i<n;i++)
        result[i]='h';
    }else{
        for(int i=0;i<n-1;i++)
        result[i]='h';
        result[n-1]='s';
    }
    result[n]='\0';
    return result;
}