/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int idx=0;
    for(int i=1;i<heightSize;i++){
        if(height[i-1]>threshold){
            height[idx++]=i;
        }
    }
    *returnSize=idx;
    return height;
}