int maximumEnergy(int* energy, int energySize, int k) {
    int dp[energySize];
    int result = INT_MIN;
    for (int i = energySize - 1; i >= 0; --i) {
        int next = (i + k < energySize) ? dp[i + k] : 0;
        dp[i] = energy[i] + next;
        if (dp[i] > result)
            result = dp[i];
    }
    return result;
}
/*
int maximumEnergy(int* energy, int energySize, int k) {
    int maxEnergy=INT_MIN;
    for(int i=0;i<energySize-k;i++){
        int idx=i;
        int currEnergy=0;
        while(idx<energySize){
            currEnergy+=energy[idx];
            idx+=k;
        }
        maxEnergy=(maxEnergy<currEnergy)?currEnergy:maxEnergy;
    }
    for(int i=energySize-k;i<energySize;i++)
    maxEnergy=(maxEnergy<energy[i])?energy[i]:maxEnergy;
    return maxEnergy;
}*/