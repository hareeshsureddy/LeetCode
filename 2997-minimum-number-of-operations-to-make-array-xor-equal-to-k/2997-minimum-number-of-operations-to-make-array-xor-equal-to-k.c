int minOperations(int* nums, int numsSize, int k) {
   int XoR=nums[0];
   for (int i=1;i<numsSize;i++){
        XoR^=nums[i];
    }
    XoR^=k;
    int result=0;
    while(XoR){
        XoR&=(XoR-1);
        result++;
    }
    return result;
}