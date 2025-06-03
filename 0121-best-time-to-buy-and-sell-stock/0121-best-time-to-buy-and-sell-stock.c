int maxProfit(int* prices, int pricesSize) {
    /* int MinpriceIdx=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<prices[MinpriceIdx])   MinpriceIdx=i;
    }
    int MaxpriceIdx=MinpriceIdx+1;
        for(int i=MaxpriceIdx+1;i<pricesSize;i++){
        if(prices[i]>prices[MaxpriceIdx])   MaxpriceIdx=i;
    }
    if(MaxpriceIdx>=pricesSize) return 0;
    else return prices[MaxpriceIdx]-prices[MinpriceIdx];   
    */ 
    int MinpriceIdx=0,Profit=0;
     for(int i=1;i<pricesSize;i++){
        if(prices[i]<=prices[MinpriceIdx])
        MinpriceIdx=i;
        else{
            int Margine=prices[i]-prices[MinpriceIdx];
            Profit=(Margine>Profit)?Margine:Profit;
        }
     }
     return Profit;
}