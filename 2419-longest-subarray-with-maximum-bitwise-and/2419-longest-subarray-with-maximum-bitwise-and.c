int longestSubarray(int* nums, int numsSize) {
    int maxNum = nums[0];
    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < numsSize; i++) {
        // Update the maximum number
        if (nums[i] > maxNum) {
            maxNum = nums[i];
            currentLength = 1;  // Reset length for the new maxNum
            maxLength = 1;
        } else if (nums[i] == maxNum) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 0;
        }
    }

    return maxLength;
}