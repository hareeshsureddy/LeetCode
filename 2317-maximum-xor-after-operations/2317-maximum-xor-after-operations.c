int maximumXOR(int* nums, int numsSize) {
    int maximumXOR=0;
    for(int i=0;i<27;i++){
        for(int j=0;j<numsSize;j++){
                if((nums[j]>>i)&1){
                        maximumXOR|=(1<<i);
                        break;
                } 
        }
    }
    return maximumXOR;
}