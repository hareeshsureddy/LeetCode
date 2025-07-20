char* restoreString(char* s, int* indices, int indicesSize) {
    char* res=(char*)malloc(sizeof(char)*(indicesSize+1));
    res[indicesSize]='\0';
    for(int i=0;i<indicesSize;i++){
        res[indices[i]]=s[i];
    }
    return res;
}