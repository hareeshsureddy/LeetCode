int compare(const void*a,const void *b){
    return *(int*)a-*(int*)b;
}

int minimumDeletions(char* word, int k) {
    int map[26]={0};
    for (int i=0;word[i];i++){
        map[word[i]-'a']++;
    }
    qsort(map,26,sizeof(int),compare);
    int minimumDeletions=0x7FFFFFFF;
    int cumulativeSum=0;
    for(int i=0;i<26;i++){
        if(!map[i]) continue;
        int delete=cumulativeSum;
        for(int j=25;j>i;j--){
            if((map[j]-map[i]<=k)) break;
                    delete+=(map[j]-map[i]-k);
            }
         minimumDeletions=fmin(minimumDeletions,delete);
        cumulativeSum+=map[i];
        }
        return minimumDeletions;
    }
    /*
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
        }
        minimumDeletions=fmin(minimumDeletions,delete);
    }   
    return minimumDeletions;
} */