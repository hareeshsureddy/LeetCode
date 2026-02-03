bool isTrionic(int* nums, int numsSize) {
    int i = 1;
    bool status = false;
    for (; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            status = true;
        } else {
            break;
        }
    }
    if(!status) return false;
    status = false;
    for (; i < numsSize; i++) {
        if (nums[i] < nums[i - 1]) {
            status = true;
        } else {
            break;
        }
    }
    if(!status) return false;
    status = false;
        for (; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            status = true;
        } else {
            break;
        }
    }
    if(i==numsSize && status) return true;
    return false;
}