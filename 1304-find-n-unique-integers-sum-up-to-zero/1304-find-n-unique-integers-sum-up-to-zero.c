/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*n);
    int i=0;
    if(n%2){
        res[0]=0;
        i++;
    } 
    int num=1;
    while(i<n){
        res[i++]=num;
        res[i++]=-num;
        num++;
    }
    *returnSize=n;
    return res;
}