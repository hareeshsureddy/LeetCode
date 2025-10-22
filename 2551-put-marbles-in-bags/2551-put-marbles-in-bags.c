int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

long long putMarbles(int* weights, int weightsSize, int k) {
    if(k==1) return 0;
    for(int i=0;i<weightsSize-1;i++){
        weights[i]+=weights[i+1];
    }
    qsort(weights,weightsSize-1,sizeof(int),compare);
    long long minScore=0,maxScore=0;
    for(int i=0;i<k-1;i++){
        minScore+=weights[i];
        maxScore+=weights[weightsSize-2-i];
    }
    return maxScore-minScore;
}