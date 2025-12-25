int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
long long maximumHappinessSum(int* happiness, int happinessSize, int k) {
    qsort(happiness,happinessSize,sizeof(int),compare);
    long long maximumHappinessSum=0;
    for(int i=0;i<k;i++){
        if(happiness[i]>=i)
        maximumHappinessSum+=happiness[i]-i;
    }
    return maximumHappinessSum;
}