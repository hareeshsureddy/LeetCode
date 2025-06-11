bool checkIfExist(int* arr, int arrSize) {
    /* //Time efficient
    int map[2001]={0};
    int zeroCnt=0;
    for(int i=0;i<arrSize;i++){
        if(!(arr[i]&1)){
        if(map[1000+arr[i]])
        return true;
        }
        if(!arr[i]){
            zeroCnt++;
            continue;
        }
        if(-501<arr[i] && arr[i]<501)
        map[1000+(arr[i]*2)]=1;
    }
    for(int i=0;i<arrSize;i++){
         if(!(arr[i]&1)){
        if(map[1000+arr[i]])
        return true;
        }       
    }
    if(zeroCnt>1)   return true;
    return false;
    */
    for( int i=0;i<arrSize;i++){
        for( int j=0;j<arrSize;j++){
            if(i==j) continue;
            if(arr[i]<501 && arr[i]>-501){
                if(2*arr[i]==arr[j]) return true;
            } else{
                if(arr[i]==arr[j]*2) return true;
            }
        }
    }
    return false;
}