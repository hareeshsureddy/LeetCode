int minimumDeletions(char* word, int k) {
    int map[26]={0};
    for (int i=0;word[i];i++){
        map[word[i]-'a']++;
    }
    int minimumDeletions=0x7FFFFFFF;
    for(int i=0;i<26;i++){
        if(!map[i]) continue;
        int delete=0;
        for(int j=0;j<26;j++){
            if(i==j || !map[j]) continue;
            if(map[j]>map[i]){
                if(map[j]-map[i]>k){
                    delete+=(map[j]-map[i]-k);
                }
            }else if(map[i]-map[j]) delete+=map[j];
                    else
                        delete+=0;
        }
        minimumDeletions=fmin(minimumDeletions,delete);
    }
    return minimumDeletions;
}