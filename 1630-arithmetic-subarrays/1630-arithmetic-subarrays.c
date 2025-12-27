/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
 }
bool* checkArithmeticSubarrays(int* nums, int numsSize, int* l, int lSize, int* r, int rSize, int* returnSize) {
    int *temp=(int*)malloc(sizeof(int)*numsSize);
    bool *res=(bool*)malloc(sizeof(bool)*rSize);
    for(int i=0;i<rSize;i++){
        int idx=0;
        for(int j=l[i];j<=r[i];j++){
            temp[idx++]=nums[j];
        }
        qsort(temp,idx,sizeof(int),compare);
        int diff=abs(temp[0]-temp[1]);
        int k=0;
        for(;k<idx-1;k++){
            if(diff!=abs(temp[k]-temp[k+1])) break;
        }
        if(k==idx-1)
        res[i]=true;
        else
        res[i]=false;
    }
    *returnSize=rSize;
    return res;
}