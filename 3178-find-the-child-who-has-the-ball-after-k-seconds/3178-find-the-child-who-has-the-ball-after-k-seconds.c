int numberOfChild(int n, int k) {
    int index=0;
    bool dir=1;
    while(k--){
        if(index==n-1 && dir==1){
        dir=0;
        }else if(index==0 && dir==0){
        dir=1;
        }
        if(dir)
        index++;
        else
        index--;
    }
    return index;
}