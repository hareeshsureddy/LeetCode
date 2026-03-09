int getLucky(char* s, int k) {
    int num = 0;
    int idx = 0;
    while (s[idx]) {
        int n = s[idx++] - 'a' + 1;
        while (n) {
            num += n % 10;
            n /= 10;
        }
    }
    while(--k){
        int n = num;
        num=0;
        while (n) {
            num += n % 10;
            n /= 10;
        }       
    }
    return num;
}