bool isPowerOfThree(int n) {
    if(n<1) return false;
    //Method-0
    return (fmod((log10(n) / log10(3)), 1) == 0);
    //Method-1
    // computing power
    double p = log10(n) / log10(3);
    // checking to see if power is an integer or not
    if (p - (int)p == 0) return true;
    else return false;
    //Method-2
    /* The maximum power of 3 value that
       integer can hold is 1162261467 ( 3^19 ) .*/
    return 1162261467 % n == 0;
    //Method-3
    while(n!=1){
        if(n%3!=0) return false;
        else
        n/=3;
    }
    return true;
}