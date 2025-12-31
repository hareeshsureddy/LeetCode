/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* partitionLabels(char* s, int* returnSize) {
    int map[26]={0};
    int *res=(int*)malloc(sizeof(int)*26);
    int idx=0;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    map[s[i]-'a']=i;
    int i=0,j;
    while(i<len){
        int cnt=0;
        int prevMax=map[s[i]-'a'];
        for(j=i;j<=prevMax;j++){
            int curMax=map[s[j]-'a'];
            if(curMax>prevMax)
            prevMax=curMax;
            cnt++;
        //    printf("prevMax %d curMax %d\n",prevMax,curMax);
        }
        res[idx++]=cnt;
        i=j;
    }
    *returnSize=idx;
    return res;
}