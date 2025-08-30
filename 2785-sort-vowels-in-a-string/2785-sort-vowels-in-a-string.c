 int compare( const void *a, const void *b){
    return *(char*)a-*(char*)b;
 }

char* sortVowels(char* s) {
    int len=strlen(s);
    int *index=(int*)malloc(sizeof(int)*len);
    char *vowels=(char*)malloc(sizeof(char)*(len));
    int i=0,j=0;
    for(;i<len;i++){
    if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||
    s[i]=='O'||s[i]=='u'||s[i]=='U'){
        index[j]=i;
        vowels[j++]=s[i];
    }
    }
    qsort(vowels,j,sizeof(char),compare);
    for(j--;j>=0;j--){
        s[index[j]]=vowels[j];
    }
    free(index);
    free(vowels);
    return s;
}