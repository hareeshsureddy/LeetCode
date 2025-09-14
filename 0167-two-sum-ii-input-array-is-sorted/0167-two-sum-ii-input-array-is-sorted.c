/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int bninarysearch(int* numbers,int numbersSize, int num){
    int l=0,r=numbersSize-1,mid;
    while(l<=r){
        mid=((l+r)/2);
        if(numbers[mid]==num) return mid;
        if(numbers[mid]<num)
        l=mid+1;
        else
        r=mid-1;
    }
    return -1;
 }
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numbersSize;i++){
        int num=target-numbers[i];
        int idx=bninarysearch(numbers,numbersSize,num);
        if(idx>=0){
            res[0]=i+1;
            if(idx==i)
            res[1]=idx+2;
            else
            res[1]=idx+1;
            *returnSize=2;
            return res;
        }
    }
    return res;
}