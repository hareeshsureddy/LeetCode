/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int len=strlen(boxes);
    *returnSize=len;
    int *res=(int*)calloc(len,sizeof(int));
    //method -1
    /*
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j && boxes[j]=='1'){
                res[i]+=abs(i-j);
            }
        }
    }
    */
    int cumSum=0;
    int cumValue=0;
    for(int i=0;i<len;i++){
        res[i]+=cumSum;
        if(boxes[i]=='1') cumValue++;
        cumSum+=cumValue;
    }
    cumSum=0;
    cumValue=0;
        for(int i=len-1;i>=0;i--){
        res[i]+=cumSum;
        if(boxes[i]=='1') cumValue++;
        cumSum+=cumValue;
    }
        return res;
}