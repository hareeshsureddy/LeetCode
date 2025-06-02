bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int map1[1001]={0};
    int map2[1001]={0};
    for (int i=0;i<targetSize;i++){
        map1[target[i]]++;
        map2[arr[i]]++;
    }
    for (int i=0;i<targetSize;i++){
         if(map1[target[i]]!=map2[target[i]]) return false;
    }
    return true;
}