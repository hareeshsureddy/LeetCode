void operations(int *nums,int numsSize, int idx,int dir){
        while(idx<numsSize && idx>=0){
            if(dir<0){
                idx--;
                if(idx<numsSize && idx>=0){
                    if(nums[idx]>0){
                        nums[idx]--;
                        dir=1;
                    } 
                }
            }else{
                idx++;
                if(idx<numsSize && idx>=0){
                    if(nums[idx]>0){
                        nums[idx]--;
                        dir=-1;
                    } 
                }
            }

        }
}
bool checkifEmpty(int *nums,int numsSize){
    for(int i=0;i<numsSize;i++)
    if(nums[i]) return false;
    return true;
}
int countValidSelections(int* nums, int numsSize) {
    int countValidSelections=0;
    int *temp=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        if(!nums[i]){
            memcpy(temp,nums,sizeof(int)*numsSize);
            operations(temp,numsSize,i,-1);
            if(checkifEmpty(temp,numsSize))
            countValidSelections++;
            memcpy(temp,nums,sizeof(int)*numsSize);
            operations(temp,numsSize,i,1);
            if(checkifEmpty(temp,numsSize))
            countValidSelections++;
        }
    }
    return countValidSelections;
}