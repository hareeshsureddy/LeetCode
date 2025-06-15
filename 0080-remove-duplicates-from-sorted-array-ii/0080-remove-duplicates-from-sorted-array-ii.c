int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==1) return 1;
    else if (numsSize==2) return 2;
    int j=2,temp1=nums[0],temp;
    for (int i=2;i<numsSize;i++){
        temp=nums[i-1];
        if( nums[i]!=temp1){
            nums[j++]=nums[i];
        }
        temp1=temp;
    }
    return j;
}