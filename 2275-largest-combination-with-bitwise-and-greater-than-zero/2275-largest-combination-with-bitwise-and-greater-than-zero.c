int largestCombination(int* candidates, int candidatesSize) {
    int map[25]={0};
    for(int i=0;i<candidatesSize;i++){
        int num=candidates[i];
        for(int bit =0;bit<25;bit++){
            if(num>>bit&1){
                map[bit]++;
            }
        }
    }
    int largestCombination=0;
    for(int i=0;i<25;i++){
        if(largestCombination<map[i])
        largestCombination=map[i];
    }
    return largestCombination;
}