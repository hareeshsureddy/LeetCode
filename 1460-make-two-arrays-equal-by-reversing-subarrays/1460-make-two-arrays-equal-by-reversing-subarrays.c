int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    /* //Method -1
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
    */
    qsort(target,targetSize,sizeof(target[0]),compare);
    qsort(arr,targetSize,sizeof(target[0]),compare);
        for (int i=0;i<targetSize;i++){
         if(target[i]!=arr[i]) return false;
    }
    return true;
}