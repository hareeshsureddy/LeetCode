int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int numOfUnplacedFruits=0;
    for(int i=0;i<fruitsSize;i++){
        int f=fruits[i];
        for(int j=0;j<fruitsSize;j++){
            if(f<=baskets[j]){
                baskets[j]=0;
                numOfUnplacedFruits--;
                break;
            }
        }
    }
    return fruitsSize+numOfUnplacedFruits;
}