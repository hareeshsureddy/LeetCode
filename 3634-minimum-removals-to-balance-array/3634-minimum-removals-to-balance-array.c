int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
/* O(n^2)*/
/*
int minRemoval(int* nums, int numsSize, int k) {
    int minRemoval = INT_MAX;
    qsort(nums, numsSize, sizeof(int), compare);
    int j = numsSize - 1;
    for (; j >= 0; j--) {
        int i=0;
        int currminRemoval=0;
        while (i < j) {
            long long num =(long long) nums[i] * k;
            //printf("%d %d \n", num, nums[j]);
            if (num >= nums[j])
                break;
            currminRemoval++;
            i++;
        }
        currminRemoval+=numsSize-j-1;
        if(currminRemoval<minRemoval)
        minRemoval=currminRemoval;
    }
    return minRemoval;
} */

int minRemoval(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare);
    int j = 1;
    int i=0;
    int length=1;
        while ( j<numsSize) {
            long long num =(long long) nums[i] * k;
            if (num >= nums[j]){
                if(length<(j-i+1))
                length=(j-i+1);
                j++;
            }else
            i++;
        }
    return numsSize-length;
}