 #include <stdio.h>

bool isPrime(int n) {
    if (n <= 1)
        return 0;   // Not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // Not prime
    }
    return true; // Prime
}

bool checkPrimeFrequency(int* nums, int numsSize) {
    int map[101]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    for(int i=0;i<101;i++){
        if(map[i] && isPrime(map[i])) return true;
    }
    return false;
}