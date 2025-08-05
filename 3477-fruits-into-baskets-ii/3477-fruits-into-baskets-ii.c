int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int numOfUnplacedFruits=0;
    for(int i=0;i<fruitsSize;i++){
        for(int j=0;j<fruitsSize;j++){
            if(baskets[j] && fruits[i]<=baskets[j]){
                baskets[j]=0;
                fruits[i]=0;
                break;
            }
        }
        if(fruits[i]) numOfUnplacedFruits++;
    }
    return numOfUnplacedFruits;
}