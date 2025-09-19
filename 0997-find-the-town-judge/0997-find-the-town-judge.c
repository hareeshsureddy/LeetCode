int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    if(n==1) return 1;
    /*
    int cnt=0;
    for(int i=0;i<trustSize-1;i++){
        if(trust[i][1]!=trust[i+1][1]) return -1;
        cnt++;
    }
    if(cnt<trustSize-1) return -1;
    return trust[0][1]; */
    int *map=(int*)calloc(sizeof(int),n+1);
    int *map1=(int*)calloc(sizeof(int),n+1);
    for(int i=0;i<trustSize;i++){
        map[trust[i][0]]++; // Person cnt for judge = 0
        map1[trust[i][1]]++; // Judge cnt should equal to n-1;
    }
    for(int i=1;i<=n;i++){
       if(!map[i] && map1[i]==n-1) {
            free(map);
            free(map1);
        return i;
       }
    }
    free(map);
    free(map1);
    return -1;
}