int buyChoco(int* prices, int pricesSize, int money) {
    int min1=100,min2=100;
    for (int i=0;i<pricesSize;i++){
        if(min1>prices[i]){
            min2=min1;
            min1=prices[i];
        }
        else if(prices[i]<min2) min2=prices[i]; 
    }
    int sum=(min1+min2);
    return (sum<=money)?money-sum:money;
}