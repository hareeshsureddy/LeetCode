bool isNumBalanced(int num){
    int map[10]={0};
    int n=num;
    while(n){
        map[n%10]++;
        n/=10;
    }
    while(num){
        int d=num%10;
        if (map[d]!=d) return false;
        num/=10;
    }  
    return true; 
}
int nextBeautifulNumber(int n) {
    for (int i=n+1;;i++){
        if(isNumBalanced(i)) return i;
    }
    return 0;
}