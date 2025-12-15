long long getDescentPeriods(int* prices, int pricesSize) {
    if(pricesSize==1) return 1;
    long long getDescentPeriods=0;
    long long  count=1;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]==prices[i-1]-1){
            count++;
            continue;
        }
        getDescentPeriods+=((count*(count+1))/2);
        count=1;
    }
    return getDescentPeriods+((count*(count+1))/2);
}