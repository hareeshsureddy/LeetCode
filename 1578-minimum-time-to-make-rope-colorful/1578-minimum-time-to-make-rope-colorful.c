int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int minTime=0;
    int currIdx=0;
    for(int i=1;i<neededTimeSize;i++){
        if(colors[currIdx]==colors[i]){
          if(neededTime[currIdx]<neededTime[i]){
                minTime+=neededTime[currIdx];
                currIdx=i;
          }else{
                minTime+=neededTime[i];
          }
        }else{
            currIdx=i;
        }
    }
    return minTime;
}