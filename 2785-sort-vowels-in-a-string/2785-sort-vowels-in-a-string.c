 const char *Vowels="AEIOUaeiou";
 char* sortVowels(char* s) {
    int len=strlen(s);
    int *index=(int*)malloc(sizeof(int)*len);
    int *map=(int*)calloc(sizeof(int),10);
    int idx=0;
    for(int i=0;i<len;i++){
        switch(s[i]){
            case 'A':
                        map[0]++;
            index[idx++]=i;
            break;
            case 'E':
                        map[1]++;
            index[idx++]=i;
            break;
            case 'I':
                        map[2]++;
            index[idx++]=i;
            break;
            case 'O':
                        map[3]++;
            index[idx++]=i;
            break;
            case 'U':
                        map[4]++;
            index[idx++]=i;
            break;
            case 'a':
                        map[5]++;
            index[idx++]=i;
            break;
            case 'e':
                        map[6]++;
            index[idx++]=i;
            break;
            case 'i':
                        map[7]++;
            index[idx++]=i;
            break;
            case 'o':
                        map[8]++;
            index[idx++]=i;
            break;
            case 'u':
                        map[9]++;
            index[idx++]=i;
            break;   
            default:
            break;     
        }
    }
    idx=0;
    for(int i=0;i<10;i++){
        while(map[i]--){
        s[index[idx++]]=Vowels[i];
        }
    }
    free(index);
    free(map);
    return s;
 }
 
 /*
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
} */