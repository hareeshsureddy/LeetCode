/*int xorAllNums(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int result=0;
    if (nums2Size%2!=0)
    {
    for (int i=0;i<nums1Size;i++)
            {
            result^=nums1[i];
            }
    }
    if (nums1Size%2!=0)
    {
    for (int i=0;i<nums2Size;i++)
            {
            result^=nums2[i];
            }
    }
     return result;
}*/
int xorAllNums(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int ans=0;
    if ((nums1Size&1) == 1){
        for(int i=0;i<nums2Size;i++){
            ans ^= nums2[i];
        }
    }
    if ((nums2Size&1) == 1){
        for(int i=0;i<nums1Size;i++){
        ans ^= nums1[i];
        }
    } 
    return ans;
}