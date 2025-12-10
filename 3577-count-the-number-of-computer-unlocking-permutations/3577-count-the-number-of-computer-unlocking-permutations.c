int compare(const void *a,const void *b){
    return (int*)a-(int*)b;
}
int factioral(long long  n){
    if(n==1) return 1;
    return (n*factioral(n-1))%1000000007;
}
int countPermutations(int* complexity, int complexitySize) {
   /* qsort(complexity,complexitySize,sizeof(int),compare);
    if(complexity[0]==complexity[1]) return 0;
    */
    for(int i=1;i<complexitySize;i++){
        if(complexity[0]>=complexity[i]) return 0;
    }
    return factioral(complexitySize-1);
}