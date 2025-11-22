int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs,costsSize,sizeof(int),compare);
    int maxIceCream=0;
    for(int i=0;i<costsSize;i++){
        if(coins){
            if(coins>=costs[i]){
                maxIceCream++;
                coins-=costs[i];
            }
        }else
        return maxIceCream;
    }
    return maxIceCream;
}