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
    int *map=(int*)calloc(sizeof(int),n);
    int *map1=(int*)calloc(sizeof(int),n);
    for(int i=0;i<trustSize;i++){
        map[trust[i][0]-1]++; // Person cnt for judge = 0
        map1[trust[i][1]-1]++; // Judge cnt should equal to n-1;
    }
    for(int i=0;i<n;i++){
       if(map[i]) continue;
       if(map1[i]==n-1) return i+1;
       return -1;
    }
    return -1;
}