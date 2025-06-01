bool isPowerOfThree(int n) {
    if(n<1) return false;
    /* The maximum power of 3 value that
       integer can hold is 1162261467 ( 3^19 ) .*/
    return 1162261467 % n == 0;
    while(n!=1){
        if(n%3!=0) return false;
        else
        n/=3;
    }
    return true;
}