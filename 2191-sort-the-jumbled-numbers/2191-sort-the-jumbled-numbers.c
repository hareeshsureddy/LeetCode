/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 typedef struct{
    int data;
    int index;
 }jumbleData;

 int compare(const void *a, const void *b){
     return ((jumbleData*)a)->data-((jumbleData*)b)->data;
 }
int* sortJumbled(int* mapping, int mappingSize, int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    jumbleData *jData=(jumbleData*)calloc(sizeof(jumbleData),numsSize);
    for(int i=0;i<numsSize;i++){
        char num[11];
        sprintf(num,"%d",nums[i]);
        for(int i=0;num[i];i++){
            num[i]=mapping[num[i]-'0']+'0';
        }
        jData[i].data=atoi(num);
        /*
        int num=nums[i];
        if(!num){
            jData[i].data=(mapping[0]);
        }else{
        int tens=1;
        while(num){
            jData[i].data+=(mapping[num%10]*tens);
            num/=10;
            tens*=10;
        }
        }
        */
        jData[i].index=i;
    }
    qsort(jData,numsSize,sizeof(jumbleData),compare);
    int *res=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        res[i]=nums[jData[i].index];
    }
    free(jData);
    return res;
}