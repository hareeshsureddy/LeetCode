/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void bubble_sort(int *nums,int numsSize, char** names){
    for (int i=0;i<numsSize-1;i++){
        for( int j=0;j<numsSize-1-i;j++){
            if(nums[j]<nums[j+1]){
            int temp=nums[j];
            char *ptr=names[j];
            nums[j]=nums[j+1];
            names[j]=names[j+1];
            nums[j+1]=temp;
            names[j+1]=ptr;
            }
        }
    }
}
void slection_sort(int *nums,int numsSize, char** names){
        for (int i=0;i<numsSize-1;i++){
                int min_idx=i;
        for( int j=i+1;j<numsSize;j++){
                if(nums[j]>nums[min_idx])
                min_idx=j;
        }
        int temp=nums[min_idx];
        char *ptr=names[min_idx];
        nums[min_idx]=nums[i];
        names[min_idx]=names[i];
        nums[i]=temp;
        names[i]=ptr;
        }
}
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
   // bubble_sort(heights,heightsSize,names);
    slection_sort(heights,heightsSize,names);
    *returnSize=heightsSize;
    return names;
}