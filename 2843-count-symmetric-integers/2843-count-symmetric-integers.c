int countSymmetricIntegers(int low, int high) {
    int symmetricCnt=0;
    while(low<=high){
        if(low>=100 && low<=1000) {
            low=1001;
            continue;
        }
        int digitCnt=0;
        if(low>=10 && low<=99)
         digitCnt=2;
         else
         digitCnt=4;
         if(low==10000) break;
        /*
        digitCnt=(int)log10(fabs(low)) + 1;
        */
        int temp=low;
    /*    while(temp){
            temp=temp/10;
            digitCnt++;
        } 
        temp=low;
        */
        if(!(digitCnt&1)){
            int sum1=0,sum2=0;
            for(int i=0;i<digitCnt/2;i++){
                sum1+=temp%10;
                temp=temp/10;
            }
                for(int i=0;i<digitCnt/2;i++){
                sum2+=temp%10;
                temp=temp/10;
            }
            if(sum1==sum2) symmetricCnt++;
        }
        low++;
    }
    return symmetricCnt;
}