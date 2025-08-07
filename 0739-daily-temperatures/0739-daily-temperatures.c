/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
    //Brute force
    /*
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    for (int i=0;i<temperaturesSize;i++){
        int days=0;
        int j=i+1;
        while(j<temperaturesSize){
            days++;
            if(temperatures[i]<temperatures[j]) break;
            j++;
        }
        temperatures[i]=(j==temperaturesSize)?0:days;
    }
    *returnSize=temperaturesSize;
    return temperatures;
} */

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int stack[100];
    int index=0;
    int *res=(int*)malloc(sizeof(int)*temperaturesSize);
    res[temperaturesSize-1]=0;
    stack[index++]=temperaturesSize-1;
    for(int i=temperaturesSize-2;i>=0;i--){
        while(index>0 && temperatures[i]>=temperatures[stack[index-1]]){
            index--;
        }
        res[i]=(index>0)?stack[index-1]-i:0;
        stack[index++]=i;
    }
    *returnSize=temperaturesSize;
    return res;
}