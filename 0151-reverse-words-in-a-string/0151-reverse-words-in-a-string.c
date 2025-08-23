void myreverseWords(char* s, int i, int j) {
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}

char* reverseWords(char* s) {
    int len=strlen(s);
    int i=0,j=len-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    i=0,j=0;
    while(j<len){
        while(j<len && s[j]==' ') j++;
        while(j<len && s[j]!=' '){
            s[i++]=s[j++];
        }
        s[i++]=' ';
    }
    while(s[i-1]==' ') i--;
    s[i]='\0';
    len=i;
    i=0,j=0;
    while(j<len){
        while(j<len && s[j]!=' ') j++;
        myreverseWords(s,i,j-1);
        j++;
        i=j;
    }
    myreverseWords(s,i,j-1);
    return s;
}
/*
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
} */