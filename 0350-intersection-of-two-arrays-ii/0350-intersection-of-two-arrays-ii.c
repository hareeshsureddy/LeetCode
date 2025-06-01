/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int map[1001]={0};
    int index=0;
    for (int i=0;i<nums1Size;i++){
        map[nums1[i]]++;
    }
    for (int i=0;i<nums2Size;i++){
        while(map[nums2[i]]){
            nums1[index++]=nums2[i];
            map[nums2[i]]--;
            break;
        }
    }
    *returnSize=index;
    return nums1;
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