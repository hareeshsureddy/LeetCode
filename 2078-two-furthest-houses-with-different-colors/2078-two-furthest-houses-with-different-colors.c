/*
int maxDistance(int* colors, int colorsSize) {
    int maxDistance=0;
    for (int i = 0; i < colorsSize; i++) {
        for(int j=colorsSize-1;j>i;j--){
            if(colors[i]!=colors[j]){
                 maxDistance=fmax( maxDistance,abs(i-j));
            }
        }
    }
    return maxDistance;
}
*/
int maxDistance(int* colors, int colorsSize) {
    int maxDistance1=0,maxDistance2=0;
    for(int i=colorsSize-1;i>0;i--){
        if(colors[0]!=colors[i]){
            maxDistance1=i;
            break;
        }
    }
    for(int i=0;i<colorsSize;i++){
        if(colors[colorsSize-1]!=colors[i]){
            maxDistance2=colorsSize-i-1;
            break;
        }
    }
    return fmax(maxDistance1,maxDistance2);
}