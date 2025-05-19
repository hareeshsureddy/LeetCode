/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int map[1001]={0};
    for (int i=0;i<nums1Size;i++){
        map[nums1[i]]=1;
    }
    for (int i=0;i<nums2Size;i++){
        map[nums2[i]]=(map[nums2[i]])?2:0;
    }
    nums1=(nums1Size<nums2Size)?nums1:nums2;
    nums1Size=(nums1Size<nums2Size)?nums1Size:nums2Size;
    int index=0;
    for (int i=0;i<nums1Size;i++){
        if(map[nums1[i]]==2){
        nums1[index++]=nums1[i];
        map[nums1[i]]=0;
        }
    }
    *returnSize=index;
    return nums1;
}