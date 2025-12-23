int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int maxCoins(int* piles, int pilesSize) {
    qsort(piles,pilesSize,sizeof(int),compare);
    int maxCoins=0;
    int i=1;
    int cnt=0;
    while(cnt<pilesSize/3){
        maxCoins+=piles[i];
        i+=2;
        cnt++;
    }
    return maxCoins;
}