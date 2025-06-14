char* generateTheString(int n) {
    char *result=(char*)malloc((n+1)*sizeof(char));
    memset(result,'h',n*sizeof(char));
    if(!(n&1)){
        result[n-1]++;
    }
    result[n]='\0';
    return result;
}