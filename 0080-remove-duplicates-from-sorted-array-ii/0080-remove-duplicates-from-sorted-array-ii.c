int removeDuplicates(int* nums, int numsSize) {
    if (numsSize<=2) return numsSize;
    int j=2;
    for (int i=2;i<numsSize;i++){
        if( nums[i]!=nums[j-2]){
            nums[j++]=nums[i];
        }
    }
    return j;
}