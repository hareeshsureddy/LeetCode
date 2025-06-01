int numWaterBottles(int numBottles, int numExchange) {
    int result=numBottles;
    int rem=0;
    while(numBottles>=numExchange){
        rem=numBottles%numExchange;
        numBottles/=numExchange;
        result+=numBottles;
        numBottles+=rem;
    }
    return result;
}