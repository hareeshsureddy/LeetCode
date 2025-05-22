bool isPalindrome(int x) {
    if(x<0) return false;
    char num[20];
    sprintf(num,"%d",x);
    int len=strlen(num);
    int i=0,j=len-1;
    while(i<j){
        if(num[i]!=num[j]) return false;
        i++;
        j--;
    }
    return true;
}