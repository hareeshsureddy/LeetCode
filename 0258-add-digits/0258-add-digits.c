int addDigits(int num) {
    while(num>9){
        int temp=num;
        num=0;
        while(temp){
            num+=temp%10;
            temp/=10;
        }
    }
    return num;
}