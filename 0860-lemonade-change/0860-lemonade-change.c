bool lemonadeChange(int* bills, int billsSize) {
    int change[3]={0};
    for (int i=0;i<billsSize;i++){
        if(bills[i]==5){
            change[0]++;
        }else if(bills[i]==10){
            if(change[0]){
                change[0]--;
                change[1]++;
            }else return false;
        } else if (change[0] && change[1]){
                change[0]--;
                change[1]--;
        }else if(change[0]>=3) change[0]-=3;
        else return false;
    }
    return true;
}