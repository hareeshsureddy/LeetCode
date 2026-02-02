int smallestEvenMultiple(int n) {
    for(int i=2;i<=300;i+=2){
        if(i%n==0) return i;
    }
    return 0;
}