int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int maximumBags(int* capacity, int capacitySize, int* rocks, int rocksSize, int additionalRocks) {
    for(int i=0;i<capacitySize;i++){
        rocks[i]=capacity[i]-rocks[i];
    }
    qsort(rocks,rocksSize,sizeof(int),compare);
    int maximumBags=0;
    for(int i=0;i<rocksSize;i++){
        if(rocks[i]){
            if(rocks[i]<=additionalRocks)
            additionalRocks-=rocks[i];
            else
            return maximumBags;
        }
            maximumBags++;
    }
    return maximumBags;
}