bool threeConsecutiveOdds(int* arr, int arrSize) {
    int OddCount=0;
    for (int i=0;i<arrSize;i++){
        if(arr[i]&1)
        OddCount++;
        else
        OddCount=0;
        if(OddCount>=3)    return true;
    }
    return false;
}