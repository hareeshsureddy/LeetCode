/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
 }
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1,nums1Size,sizeof(nums1[0]),compare);
    qsort(nums2,nums2Size,sizeof(nums2[0]),compare);
    int i=0,j=0,index=0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]==nums2[j]){
            nums1[index++]=nums1[i];
            i++;
            j++;
        }
        else{
        if(i<nums1Size && j<nums2Size && nums1[i]<nums2[j])
        i++;
        else
        j++;
        }
    }
        *returnSize=index;
    return nums1;
    /*
    int map[1001]={0};
    int index=0;
    for (int i=0;i<nums1Size;i++){
        map[nums1[i]]++;
    }
    for (int i=0;i<nums2Size;i++){
        if(map[nums2[i]]){
            nums1[index++]=nums2[i];
            map[nums2[i]]--;
        }
    }
    *returnSize=index;
    return nums1;
    */
    /*
    int index=0;
    for (int i=0;i<nums1Size;i++){
        for (int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                nums1[index++]=nums1[i];
                nums2[j]=-1;
                break;
            }
        }
    }
    *returnSize=index;
    return nums1;
    */
}