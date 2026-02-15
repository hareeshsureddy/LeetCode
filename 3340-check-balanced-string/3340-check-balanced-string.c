bool isBalanced(char* num) {
    int oddSum=0,evenSum=0;
    int i=0;
    while(num[i]){
        if(i&1)
        oddSum+=num[i]-'0';
        else
        evenSum+=num[i]-'0';
        i++;
    }
    return oddSum==evenSum;
}