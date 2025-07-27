int countHillValley(int* nums, int numsSize) {
    int cnt=0;
    for(int i=1;i<numsSize-1;i++){
        if(nums[i]!=nums[i-1]){
            int j=i+1;
            while(j<numsSize && nums[i]==nums[j]) j++;
            if(j==numsSize) break;
        if((nums[i]<nums[i-1] && nums[i]<nums[j])
        ||(nums[i]>nums[i-1] && nums[i]>nums[j])) cnt++;
        }
    }
    return cnt;
}