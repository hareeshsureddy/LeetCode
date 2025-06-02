bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int map[1001]={0};
    for (int i=0;i<targetSize;i++){
        map[target[i]]++;
        map[arr[i]]++;
    }
    for (int i=0;i<targetSize;i++){
         if(map[target[i]]!=2) return false;
    }
    return true;
}