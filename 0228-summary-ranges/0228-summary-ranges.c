/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    if(!numsSize){
        *returnSize=0;
        return '\0';
    }
    char **res=(char**)malloc(sizeof(char*)*numsSize);
    int i=0,j=0;
    int idx=0;
    while(i<numsSize && j<numsSize){
        long long num=nums[i];
        while(j<numsSize && nums[j]==num){
            num++;
            j++;
        }
        res[idx]=(char*)malloc(sizeof(char)*30);
        char str[20];
        sprintf(str,"%d",nums[i]);
        if(nums[i]!=num-1){
        strcpy(res[idx],str);
        strcat(res[idx],"->");
        sprintf(str,"%d",num-1);
        strcat(res[idx],str);
        }else{
            strcpy(res[idx],str); 
        }
        idx++;
        i=j;
    }
    *returnSize=idx;
    return res;
}