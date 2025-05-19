bool isIsomorphic(char* s, char* t) {
    int len=strlen(s);
    if(len!=strlen(t)) return false;
    char *map=(char*)calloc(128,sizeof(char));
    char *map1=(char*)calloc(128,sizeof(char));
    for(int i=0;i<len;i++){
        int index=s[i];
        if(map[index]=='\0'){
         if(map1[t[i]]=='\0'){
            map[index]=t[i];
            map1[t[i]]=map[index];
         }
            else
            return false;
        }
        else if (map[index]!=t[i]) return false;
    }
    return true;
}