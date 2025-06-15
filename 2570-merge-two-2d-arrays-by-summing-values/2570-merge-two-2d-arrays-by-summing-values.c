/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** mergeArrays(int** nums1, int nums1Size, int* nums1ColSize, int** nums2, int nums2Size, int* nums2ColSize, int* returnSize, int** returnColumnSizes) {
    int **result=(int**)malloc((nums1Size+nums2Size)*sizeof(int*));
    for(int i=0;i<(nums1Size+nums2Size);i++){
        result[i]=(int*)malloc(2*sizeof(int));
    }
    int i=0,j=0,k=0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i][0]<nums2[j][0]){
            result[k][0]=nums1[i][0];
            result[k++][1]=nums1[i++][1];
        }else if (nums1[i][0]>nums2[j][0]){
            result[k][0]=nums2[j][0];
            result[k++][1]=nums2[j++][1];
        }else{
            result[k][0]=nums1[i][0];
            result[k++][1]=nums2[j++][1]+nums1[i++][1];
        }
    }
    while(i<nums1Size){
            result[k][0]=nums1[i][0];
            result[k++][1]=nums1[i++][1];
    }
    while(j<nums2Size){
            result[k][0]=nums2[j][0];
            result[k++][1]=nums2[j++][1];
    }
    int *colSize=(int *)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
    colSize[i]=2;
    *returnColumnSizes=colSize;
    *returnSize=k;
    return result;
}