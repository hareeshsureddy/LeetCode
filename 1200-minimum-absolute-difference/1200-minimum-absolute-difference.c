/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int** minimumAbsDifference(int* arr, int arrSize, int* returnSize,
                           int** returnColumnSizes) {
    int len = 10;
    int** res = (int**)malloc(sizeof(int*) * len);
    qsort(arr, arrSize, sizeof(int), compare);
    int mindiff = INT_MAX;
    for (int i = 1; i < arrSize; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < mindiff)
            mindiff = diff;
    }
    int idx = 0;
    for (int i = 1; i < arrSize; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff == mindiff) {
            if (idx >= len) {
                len *= 2;
               int **new_res = (int**)realloc(res, sizeof(int*) * len);
               if(!new_res){
                free(res);
                return NULL;
               }
               res=new_res;
            }
            res[idx] = (int*)malloc(sizeof(int) * 2);
            res[idx][0] = arr[i - 1];
            res[idx++][1] = arr[i];
        }
    }
    int* coloumSize = (int*)malloc(sizeof(int) * idx);
    for (int i = 0; i < idx; i++)
        coloumSize[i] = 2;
    *returnSize = idx;
    *returnColumnSizes = coloumSize;
    return res;
}