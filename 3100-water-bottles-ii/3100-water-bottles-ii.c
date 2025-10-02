int maxBottlesDrunk(int numBottles, int numExchange) {
    int result=numBottles;
    while(numBottles>=numExchange){
        numBottles-=numExchange;
        numExchange++;
        result++;
        numBottles++;
    }
    return result;
}