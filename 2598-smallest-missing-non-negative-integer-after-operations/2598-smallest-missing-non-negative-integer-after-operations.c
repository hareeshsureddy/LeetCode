#define MAX_VALUE 100001
int findSmallestInteger(int* nums, int numsSize, int value) {
    int *map=(int *)calloc(sizeof(int),value);
    int rem;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0)
            rem=((nums[i]%value)+value)%value;
        else
            rem=nums[i]%value;
            map[rem]++;
    }
    for(int i=0;i<MAX_VALUE;i++){
        if(map[i%value])
        map[i%value]--;
        else
        return i;
    }
    return 0;
}