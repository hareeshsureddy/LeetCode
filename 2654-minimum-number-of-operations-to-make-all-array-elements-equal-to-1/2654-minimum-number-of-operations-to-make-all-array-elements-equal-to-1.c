int GCD(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int minOperations(int* nums, int numsSize) {
    int onesCount = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] == 1)
            onesCount++;

    if (onesCount)
        return numsSize - onesCount;
    int minOpr = INT_MAX;
    for (int i = 0; i < numsSize - 1; i++) {
        int gcd = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            gcd = GCD(gcd, nums[j]);
            if (gcd == 1) {
                minOpr = fmin(minOpr, j - i);
                break;
            }
        }
    }
    if(minOpr==INT_MAX) return -1;
    return minOpr+(numsSize-1);
}