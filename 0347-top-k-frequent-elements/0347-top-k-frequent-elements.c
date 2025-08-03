/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
  typedef struct {
    int num;
    int freq;
 }numsData;
 int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
 }
 int comPare(const void *a, const void *b){
    return ((numsData*)b)->freq-((numsData*)a)->freq;
 }

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    numsData *res=(numsData*)malloc(sizeof(numsData)*numsSize);
    int indexx=0;
    int start=0,curr=0;
    while(curr<numsSize){
        while(curr<numsSize && nums[start]==nums[curr]) curr++;
       // if(curr-start>=k)
       // nums[indexx++]=nums[start];
       res[indexx].num=nums[start];
       res[indexx++].freq=curr-start;
        start=curr;
    }
    qsort(res,indexx,sizeof(numsData),comPare);
    for(int i=0;i<k;i++){
        nums[i]=res[i].num;
    }
    *returnSize=k;
    return nums;
}