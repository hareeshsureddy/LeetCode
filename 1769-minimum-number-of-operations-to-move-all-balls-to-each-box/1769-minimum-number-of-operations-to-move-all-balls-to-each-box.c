/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int len=strlen(boxes);
    *returnSize=len;
    int *res=(int*)calloc(len,sizeof(int));
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j && boxes[j]=='1'){
                res[i]+=abs(i-j);
            }
        }
    }
    return res;
}