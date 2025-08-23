/* char* reverseWords(char* s) {

} */

char* reverseWords(char* s) {
    int len=strlen(s);
    char *result=(char*)malloc((len+1)*sizeof(char));
    int i,k,j=len-1,idx=0;
    while(i>=0){
        while(j>=0 && s[j]==' ') j--;
        if(j<0) break;
        i=j;
        while(i>=0 && s[i]!=' ') i--;
        for(k=i+1;k<=j;k++)
        result[idx++]=s[k];
        result[idx++]=' ';
        j=i;
    }
    result[idx-1]='\0';
    return result;
} 