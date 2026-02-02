char* reversePrefix(char* s, int k) {
    int i=0,j=k-1;
    while(i<j){
        char temp=s[i];
        s[i++]=s[j];
        s[j--]=temp;
    }
    return s;
}