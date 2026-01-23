int wateringPlants(int* plants, int plantsSize, int capacity) {
    int waterCan=capacity;
    int wateringPlants=0;
    for(int i=0;i<plantsSize;i++){
        if(plants[i]<=waterCan){
                wateringPlants++;
                waterCan-=plants[i];
        }else{
            waterCan=capacity;
            wateringPlants+=((i+1)<<1)-1;
            waterCan-=plants[i];
        }
    }
    return wateringPlants;
}