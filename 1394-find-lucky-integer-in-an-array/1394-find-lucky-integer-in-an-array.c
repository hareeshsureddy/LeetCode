int compare(const void*a, const void*b){
    return *(int*)a-*(int*)b;
}
int findLucky(int* arr, int arrSize) {
    //Methode-1
    int result=-1,curFreq=1;
    qsort(arr,arrSize,sizeof(arr[0]),compare);
    for ( int i=arrSize-1;i>0;i--){
        if(arr[i]==arr[i-1]) curFreq++;
        else{
            if(curFreq==arr[i])
            result=(result<curFreq)?curFreq:result;
            curFreq=1;
        }
    }
    if(curFreq==arr[0])
    result=(result<curFreq)?curFreq:result;
    return result;
}