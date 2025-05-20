int findMaxK(int* nums, int numsSize) {
    int map[1001]={0};
    int max=-1;
    for (int i=0;i<numsSize;i++){
        if(nums[i]>0){
            int index=nums[i];
            if(map[index]){
               if (map[index]==2) 
               max=(max<index)?index:max;
            }
            else
            map[index]=1;
        }else{
            int index=abs(nums[i]);
            if(map[index]){
               if (map[index]==1) 
               max=(max<index)?index:max;
            }
            else
            map[index]=2;
        }
    }
    return max;
}