int passThePillow(int n, int time) {
    int index=1;
    bool dir=1;
    while(time--){
        if(index>=n && dir==1){
        dir=0;
        }else if(index==1 && dir==0){
        dir=1;
        }
        if(dir)
        index++;
        else
        index--;
    }
    return index;
}