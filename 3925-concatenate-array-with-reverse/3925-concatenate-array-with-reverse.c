/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int n=numsSize*2;
  int *res=(int*)malloc(sizeof(int)*n);
  for(int i=0;i<numsSize;i++){
    res[i]=nums[i];
    res[n-i-1]=nums[i];
  }  
  *returnSize=n;
  return res;
}