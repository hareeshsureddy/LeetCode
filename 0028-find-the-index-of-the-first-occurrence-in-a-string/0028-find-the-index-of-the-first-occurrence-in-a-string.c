int strStr(char* haystack, char* needle) {
    int len1=strlen(haystack);
    int len2=strlen(needle);
    if (len1<len2) return -1;
    int i,j;
    for( i=0;i<=len1-len2;i++){
        for ( j=0;j<len2;j++){
            if(haystack[i+j]!=needle[j])
            break;
        }
        if(j==len2) return i;
    }
    return -1; 
    /*
    int result=(int)strstr(haystack,needle);
    if(result)
    return (int)result-(int)haystack;
    else return -1;
    */
}