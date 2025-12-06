typedef struct {
    int cnt;
    int idx;
}typeMap;
#define SIZE 62
typeMap map[SIZE];
int compare(const void *a, const void *b){
    return ((typeMap*)b)->cnt-((typeMap*)a)->cnt;
}
char* frequencySort(char* s) {
    for(int i=0;i<SIZE;i++){
        map[i].idx=i;
        map[i].cnt=0;
    }
    int j=0;
    while(s[j]){
        if(s[j]<'A')
        map[s[j]-'0'+52].cnt++;
        else if(s[j]>'Z')
        map[s[j]-'a'+26].cnt++;
        else
        map[s[j]-'A'].cnt++;
        j++;
    }
    qsort(map,SIZE,sizeof(typeMap),compare);
    int idx=0;
    for(int i=0;i<SIZE;i++){
        int cnt=map[i].cnt;
        int c=map[i].idx;
        if(cnt==0) break;
        printf("%d %d \n",c,cnt);
        for(int j=0;j<cnt;j++)
        if(c<26)
        s[idx++]=c+'A';
        else if(c<52)
        s[idx++]=c+'a'-26;
        else
        s[idx++]=c+'0'-52;
    }
    return s;
}