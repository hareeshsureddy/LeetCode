bool checkIfExist(int* arr, int arrSize) {
    int map[2001]={0};
    for(int i=0;i<arrSize;i++){
        if(!(arr[i]&1)){
        if(map[1000+arr[i]])
        return true;
        }
        if(arr[i]!=0 && -501<arr[i] && arr[i]<501)
        map[1000+(arr[i]*2)]=1;
    }
    for(int i=0;i<arrSize;i++){
         if(!(arr[i]&1)){
        if(map[1000+arr[i]])
        return true;
        }       
    }
    return false;
}