int maxDistance(int* colors, int colorsSize) {
    int maxDistance=0;
    for (int i = 0; i < colorsSize; i++) {
        for(int j=0;j<colorsSize;j++){
            if(colors[i]!=colors[j]){
                 maxDistance=fmax( maxDistance,abs(i-j));
            }
        }
    }
    return maxDistance;
}