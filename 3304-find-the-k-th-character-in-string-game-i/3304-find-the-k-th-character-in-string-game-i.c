char kthCharacter(int k) {
    char *char_ptr=(char*)malloc(sizeof(char)*k);
    int i=1;
    char_ptr[0]='a';
    while(i<k){
        int end=i;
        for (int j=0;j<end;j++){
            char_ptr[i++]=(char_ptr[j]=='z')?'a':char_ptr[j]+1;
            if(i==k) break;
        }
    }
    return char_ptr[k-1];
}