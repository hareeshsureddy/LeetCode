int findFinalValue(int* nums, int numsSize, int original) {
    bool status=true;
    while(1){
        int i=0;
        for(;i<numsSize;i++){
            if(nums[i]==original){
                original*=2;
                break;
            }
        }
        if(i==numsSize) return original;
    }
}