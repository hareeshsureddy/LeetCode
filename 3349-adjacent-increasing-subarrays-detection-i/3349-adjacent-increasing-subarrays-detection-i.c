/*
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
*/
bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    int prevLen=1,currentLen=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            currentLen++;
            continue;
        }
        if(currentLen/2>=k) return true;
        if(fmin(currentLen,prevLen)>=k) return true;
        prevLen=currentLen;
        currentLen=1;
    }
    if(currentLen/2>=k) return true;
    if(fmin(currentLen,prevLen)>=k) return true;
    return false;
}