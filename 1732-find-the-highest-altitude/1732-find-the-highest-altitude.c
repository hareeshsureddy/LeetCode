int largestAltitude(int* gain, int gainSize) {
    int largestAltitude=0;
    int curAltitude=0;
    for(int i=0;i<gainSize;i++){
        curAltitude+=gain[i];
        if(curAltitude>largestAltitude)
        largestAltitude=curAltitude;
    }
    return largestAltitude;
}