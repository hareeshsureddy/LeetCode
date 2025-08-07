/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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
}