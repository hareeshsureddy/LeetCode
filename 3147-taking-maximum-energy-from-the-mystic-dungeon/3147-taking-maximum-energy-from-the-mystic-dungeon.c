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
}