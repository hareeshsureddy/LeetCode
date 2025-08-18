void stringReverse(char *s,int start, int end){
        while(start<end){
            char temp=s[end];
            s[end--]=s[start];
            s[start++]=temp;
        }
}

char* reverseWords(char* s) {
    int len=strlen(s);
    int i=0,j=0;
    while(j<len){
        while(j<len && s[j]!=' ') j++;
        stringReverse(s,i,j-1);
        j++;
        i=j;
    }
    return s;
}