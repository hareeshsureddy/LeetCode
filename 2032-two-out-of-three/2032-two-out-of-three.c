/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize) {
    bool map[101][3]={false};
    int n=(nums1Size>nums2Size)?((nums1Size>nums3Size)?nums1Size:nums3Size):((nums2Size>nums3Size)?nums2Size:nums3Size);
    int *res=(int*)malloc(sizeof(int)*(1+n));
    for(int i=0;i<n;i++){
        if(i<nums1Size)
        map[nums1[i]][0]=true;
        if(i<nums2Size)
        map[nums2[i]][1]=true;
        if(i<nums3Size)
        map[nums3[i]][2]=true;
    }
    int index=0;
    for(int i=1;i<101;i++){
        if((map[i][0]&&map[i][1])||(map[i][1]&&map[i][2])||(map[i][0]&&map[i][2]))
        res[index++]=i;
    }
    *returnSize=index;
    return res;
}