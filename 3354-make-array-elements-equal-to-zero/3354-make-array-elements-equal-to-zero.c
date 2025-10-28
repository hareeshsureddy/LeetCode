int countValidSelections(int* nums, int numsSize) {
    int countValidSelections=0;
    int TotalSum=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]){
            TotalSum+=nums[i];
        }
    }
    int currSum=0;
    for(int i=0;i<numsSize;i++){
        currSum+=nums[i];
        int rightSum=TotalSum-currSum;
        if(!nums[i]){
            if(currSum==rightSum)
            countValidSelections+=2;
            else if(abs(currSum-rightSum)==1)
             countValidSelections+=1;
        }
    }
    return countValidSelections;
}
/*
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
} */