bool wordPattern(char* pattern, char* s) {
    char *map[26]={0};
    int i=0,j=0;
    while(pattern[i]){
        int indexx=pattern[i]-'a';
        if(map[indexx]){
         while(s[j] && s[j]==' ') j++;
        int len=0,k=j;
        while(s[k] && s[k]!=' ') {
            k++;
            len++;
        }
        char *temp=(char*)malloc((len+1)*sizeof(char));
        len=0;
       while(s[j] && s[j]!=' '){
        temp[len++]=s[j++];
       }
       temp[len]='\0';
       for (int l=0;l<26;l++){
        if(map[l] && indexx!=l){
            if (!strcmp(map[l],temp)) return false;  
        }
       }
       if (strcmp(map[indexx],temp)) return false;           
        }else{
        while(s[j] && s[j]==' ') j++;
        int len=0,k=j;
        while(s[k] && s[k]!=' ') {
            k++;
            len++;
        }
        map[indexx]=(char*)malloc((len+1)*sizeof(char));
        len=0;
       while(s[j] && s[j]!=' '){
        map[indexx][len++]=s[j++];
       }
       map[indexx][len]='\0';
        for (int l=0;l<26;l++){
        if(map[l] && indexx!=l){
            if (!strcmp(map[l],map[indexx])) return false;  
        }
       }
        }
        i++;
        if(pattern[i] && !s[j]) return false;
    }
    if(s[j]) return false;
    return true;
}