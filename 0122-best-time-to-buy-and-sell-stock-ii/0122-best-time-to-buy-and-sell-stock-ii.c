int maxProfit(int* prices, int pricesSize) {
        int Holding=prices[0],Profit=0;
     for(int i=1;i<pricesSize;i++){
            if(Holding<prices[i]){
                Profit+=prices[i]-Holding;
                Holding=prices[i];
            }else{
                Holding=prices[i];
            }
        }
     return Profit;
}