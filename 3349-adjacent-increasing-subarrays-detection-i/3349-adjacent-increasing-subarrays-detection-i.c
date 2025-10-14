bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    for (int i = 0; i <= numsSize - (2 * k); i++) {
        int j = i;
        int upperBound = i + k - 1;
        while (j < upperBound) {
            if (!(nums[j] < nums[j + 1]))
                break;
            j++;
        }
        if (j == upperBound) {
            j++;
            upperBound = j + k - 1;
            while (j < upperBound) {
                if (!(nums[j] < nums[j + 1]))
                    break;
                j++;
            }
            if (j == upperBound)  return true;
        }
    }
    return false;
}