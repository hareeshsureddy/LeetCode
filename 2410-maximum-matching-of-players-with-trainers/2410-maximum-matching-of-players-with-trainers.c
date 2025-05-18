/*quick sort*/
int partition(int *nums,int start,int end){
    // Random pivot selection
    {
    int pivotIndex = start + rand() % (end - start + 1);
    int temp=nums[pivotIndex];
    nums[pivotIndex]=nums[start];
    nums[start]=temp;
    }
    int pivot=nums[start];
    int i=start;
    int j=end;
    while(i<j){
        while(nums[i]<=pivot && i<end){
            i++;
        }
        while(nums[j]>pivot && j>start){
            j--;
        }
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
            int temp=nums[j];
            nums[j]=pivot;
            nums[start]=temp;
            return j;
}
void quickSort(int *nums,int start,int end){
        if(start<end){
            int pi=partition(nums,start,end);
            quickSort(nums,start,pi-1);
            quickSort(nums,pi+1,end);
        }
}    
    int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int matchPlayersAndTrainers(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    //TLE
    //quickSort(g,0,gSize-1);   
    //quickSort(s,0,sSize-1);

    int childIdx = 0, cookieIdx = 0, count = 0;
    while(childIdx < gSize && cookieIdx < sSize) {
        if (g[childIdx] <= s[cookieIdx]) {
            count++;
            childIdx++;
        }
        cookieIdx++;
    }

    return count;
}