int totalMoney(int n) {
    int totalMoney=1;
    int day=1;
    int prefixSum=1;
    int Monday=1;
    while(day<n){
        if(day%7==0){
            prefixSum=Monday;
            Monday++;
        } 
        prefixSum++;
        totalMoney+=prefixSum;
        day++;
    }
    return totalMoney;
}