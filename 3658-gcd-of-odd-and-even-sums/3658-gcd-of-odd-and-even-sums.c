int gcdOfOddEvenSums(int n) {
    if(n==1) return 1;
    int sumOdd=0;
    int sumEven=0;
    for( int i=1;i<(n*2);i++)
        if(i%2)
        sumOdd+=i;
        else
        sumEven+=i;
    //Method-1
    while(sumOdd!=sumEven){
        if(sumEven>sumOdd)
        sumEven-=sumOdd;
        else
        sumOdd-=sumEven;
    }
    return sumEven;
    //Method-2
    int result=sumOdd;
    while(result>0){
        if(sumOdd%result==0 && sumEven%result==0)
            break;
        result--;
    }
    return result;
}