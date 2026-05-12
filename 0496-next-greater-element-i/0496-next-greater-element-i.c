/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    for(int i=0;i<nums1Size;i++){
        int res=-1;
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                while(j<nums2Size){
                    if(nums1[i]<nums2[j]){
                        res=nums2[j];
                        break;
                    }
                    j++;
                }
                break;
            }
        }
        nums1[i]=res;
    }
    *returnSize=nums1Size;
    return nums1;
}