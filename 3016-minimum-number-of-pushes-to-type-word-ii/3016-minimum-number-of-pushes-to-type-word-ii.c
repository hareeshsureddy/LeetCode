int compare(const void *a, const void *b){
    return *(int*)b-*(int*)a;
}

int minimumPushes(char* word) {
    int minimumPushes=0;
    int map[26]={0};
    int i=0;
    while(word[i]){
        map[word[i]-'a']++;
        i++;
    }
    qsort(map,26,sizeof(int),compare);
    for(int i=0;i<8 && map[i];i++){
        minimumPushes+=map[i];
    }
    for(int i=8;i<16 && map[i];i++){
        minimumPushes+=map[i]<<1;
    }
    for(int i=16;i<24 && map[i];i++){
        minimumPushes+=map[i]*3;
    }
    for(int i=24;i<26 && map[i];i++){
        minimumPushes+=map[i]*4;
    }
    return minimumPushes;
}