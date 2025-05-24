/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void insertionSort(int *nums,int *map,int len){
    for (int i=0;i<len-1;i++){
        int index=i;
        for (int k=i+1;k<len;k++){
            if( nums[k]>nums[index])
                index=k;
        }
        int temp=nums[i];
        int temp1=map[i];
        nums[i]=nums[index];
        map[i]=map[index];
        nums[index]=temp;
        map[index]=temp1;
    }
}
char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    char **result=(char**)calloc(scoreSize,sizeof(char**));
    int map[scoreSize];
    for (int i=0;i<scoreSize;i++){
    result[i]=(char*)calloc(13,sizeof(char));
    map[i]=i;
    }
    *returnSize=scoreSize;
    insertionSort(score,map,scoreSize);
    for(int i=0;i<scoreSize;i++){
        switch(i){
            case 0:
            result[map[i]]="Gold Medal";
            break;
            case 1:
            result[map[i]]="Silver Medal";
            break;
            case 2:
            result[map[i]]="Bronze Medal";
            break;
            default:
            sprintf(result[map[i]],"%d",(1+i));
            break;
        }
    }
    return result;
}