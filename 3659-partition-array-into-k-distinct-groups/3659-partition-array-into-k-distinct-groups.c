/*
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

bool partitionArray(int* nums, int numsSize, int k) {
    if(numsSize%k!=0) return false;
    qsort(nums,numsSize,sizeof(int),compare);
    int i=0,j=0;
    int freq=numsSize/k;
    while(j<numsSize){
        while(j<numsSize && nums[i]==nums[j]) j++;
        if(j-i>freq) return false;
        i=j;
    }
    if(j-i>freq) return false;
    return true;
}
*/
#define SIZE 100001
int countMap[SIZE];
bool partitionArray(int* nums, int numsSize, int k) {
    if(numsSize%k!=0) return false;
    int freq=numsSize/k;
    memset(countMap,0,SIZE*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(++countMap[nums[i]]>freq) return false;
    }
    return true;
}