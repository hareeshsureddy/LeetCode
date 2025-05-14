int countTriplets(int* arr, int arrSize) {
    int Prefix[arrSize+1];
    int result=0;
    Prefix[0]=0;
    Prefix[1]=arr[0];
    for(int i=2;i<=arrSize;i++){
        Prefix[i]=arr[i-1]^Prefix[i-1];
    }
    for (int i=0;i<arrSize;i++){
      for (int j=i+1;j<=arrSize;j++){ 
        if(Prefix[i]==Prefix[j])
            result+=j-i-1; 
      }
    }
    return result;
}