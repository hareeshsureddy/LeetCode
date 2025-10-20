
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int maxDistinctElements(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),compare);
    int count=0;
    int prev=INT_MIN;
    for(int i=0;i<numsSize;i++){
        int minVal=nums[i]-k;
        if(prev<minVal){
            prev=minVal;
            count++;
        }else if(prev<nums[i]+k){
            prev++;
            count++;
        }
    }
    return count;
}
/*
#define SIZE 100000001
static bool pMap[SIZE];
static bool nMap[SIZE];
int maxDistinctElements(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),compare);
    memset(pMap,false,SIZE);
    memset(nMap,false,SIZE);
    int result=0;
    for(int i=0;i<numsSize;i++){
        int num;
        for(int j=-k;j<=k;j++){
             num=nums[i]+j;
            if(num<0){
                num*=-1;
                if(!(nMap[num])){
                    nMap[num]=true;
                    result++;
                    break;
                }
            }else{
                if(!(pMap[num])){
                    pMap[num]=true;
                    result++;
                    break;
                }
            }
        }
    }
    return result;
}
*/
