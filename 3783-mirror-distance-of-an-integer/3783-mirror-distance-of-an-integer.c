
int reverseNum(int num) {
    int res = 0;
    while (num) {
        res *= 10;
        res += num % 10;
        num /= 10;
    }
    return res;
}

int mirrorDistance(int n) { return abs(n - reverseNum(n)); }