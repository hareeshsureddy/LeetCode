int missingNumber(int* nums, int numsSize) {
    int sum=0;
    /*Approach-1*/
    /*
    for (int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    return (((numsSize*(numsSize+1))/2)-sum);
    */
    /*Approach-2*/
        for (int i=0;i<numsSize;i++){
        sum^=nums[i]^i;
    }
    return sum^numsSize;
}