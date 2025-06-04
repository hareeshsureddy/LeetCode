bool canJump(int* nums, int numsSize) {
    int Maxrichable=nums[0];
    for (int i=1;i<numsSize;i++){
            if(i>Maxrichable) return false;
            Maxrichable=(i+nums[i]>Maxrichable)?i+nums[i]:Maxrichable;
    }
    return true;
}