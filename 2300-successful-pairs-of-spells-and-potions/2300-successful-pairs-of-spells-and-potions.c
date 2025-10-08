/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int binarySearch(int* arr, int start, int end, int target) {
    int l = start;
    int r = end;
    int idx = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= target) {
            idx = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        /*
        if(arr[mid]==target){
            while(mid>=0 && arr[mid]==target) mid--;
            return mid+1;
        }
        else if(arr[mid]>target){
            r=mid-1;
            idx=mid;
        }else{
            l=mid+1;
        }*/
    }
    return idx;
}
int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize,
                     long long success, int* returnSize) {
    int* res = (int*)malloc( spellsSize*sizeof(int));
    qsort(potions, potionsSize, sizeof(int), compare);
    int maxtarget = potions[potionsSize - 1];
    for (int i = 0; i < spellsSize; i++) {
    /*    double num = success / (double)spells[i];
        int target = (int)num;
        target = (num > target) ? target + 1 : target;*/
         long long target = (success + spells[i] - 1) / spells[i]; // ceil integer
        if (target > maxtarget){
            res[i] =0;
            continue;
        }
        int idx = binarySearch(potions, 0, potionsSize - 1, target);
        printf("%d ",idx);
        if(idx>=0)
        res[i] = potionsSize - idx;
    }
    *returnSize = spellsSize;
    return res;
}