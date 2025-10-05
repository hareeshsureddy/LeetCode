bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if(flowerbedSize==1){
        if(flowerbed[0]){
            if(n==0) return true;
            return false;
        }else{
            if(n<2) return true;
            return false;
        }
    }
    int cnt=0;
    if(!flowerbed[0] && !flowerbed[1]){
        flowerbed[0]=1;
        cnt++;
    }
    for(int i=1;i<flowerbedSize-1;i++){
        if(!flowerbed[i-1] && !flowerbed[i] && !flowerbed[i+1]){
                flowerbed[i]=1;
                cnt++;
        }
        if(cnt>=n) return true;
    }
    if(!flowerbed[flowerbedSize-1] && !flowerbed[flowerbedSize-2])
        cnt++;
    if(cnt>=n) return true;
    return false;
}